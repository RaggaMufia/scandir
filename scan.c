/*
 * Read output of a single lane+mid case
 */

#include <db/db.h>
#include <hash/muttype.h>
#include <policy/rawgroup.h>
#include <policy/true.h>
#include <policy/heteroplasmy.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	FILE *f;
	int rc;
	sqlite3 *db;
	mutations m, hm;
	
	memset(&m, 0, sizeof(mutations));
	memset(&hm, 0, sizeof(mutations));

	int numgrp, numgrp_raw, numgrp_contaminated, sample_id;
	sscanf(argv[4], "%d", &numgrp_raw);
	sscanf(argv[5], "%d", &numgrp_contaminated);
 	numgrp = numgrp_raw - numgrp_contaminated;
	sscanf(argv[6], "%d", &sample_id);

	rc = sqlite3_open(argv[1], &db);
	if(rc) {
		fprintf(stderr, "sqlite err: %s\n", sqlite3_errmsg(db));
		return -1;
	}

	// output.txt
	f = fopen(argv[2], "r"); 
	if(f == NULL) {
		perror("can't open file\n");
		return -1;
	}
	fseek(f, 0, SEEK_SET);

	char *buf;
	size_t sz = 0;
	getline(&buf,&sz, f);

	char *pos_str;
	int pos;
	char mutname[7]; // will look like 'g_to_c'
	int readnum = 0;
	int numtrue = 0; // on this line
	unsigned char c;
	do {
		c = fgetc(f);
		if(feof(f)) break;
		if(readnum) {
			char *arr[3];
			int i_arr[3];
			int i;
			for(i = 0; i < 3; i++) {
				size_t idx = 0;
				arr[i] = (char *)malloc(1);
				do {
					arr[i][idx++] = c;
					arr[i] = (char *)realloc(arr[i], idx+1);
					c = fgetc(f);
					if(feof(f)) {
						break;
					}
				} while (c != ',' && c != '\n');
				arr[i][idx] = '\0';
				if(arr[i][0] == ',')
					memmove(arr[i], arr[i]+1, strlen(arr[i]+1) + 1);
				sscanf(arr[i], "%d", &i_arr[i]);
				free(arr[i]);
			}
			if(within_rawgroup(i_arr[2]) && istrue_mutation(pos, i_arr)) {
				numtrue++;
				if(is_subst(mutname))
					printf("%d %d\n", i_arr[0], i_arr[1]); // grpID, freq
			}
			if(c == '\n' || feof(f)) {
				if(numtrue > 0) { // numtrue is # true numbers
					int ishetero = is_heteroplasmy(numtrue, numgrp);
					if(ishetero) {
						add(&hm, get_offset(mutname), numtrue);
					} else {
						add(&m, get_offset(mutname), numtrue);
					}
					if(is_subst(mutname))
						printf("# %d %d %d %d %d\n", i_arr[2], pos, get_offset(mutname), is_subst(mutname), ishetero);
					numtrue = 0;
				}
				readnum--; // done with this pos+mutname line
				if(feof(f)) break;
			}
		}

		if (c == '\n' && !readnum) {
			c = fgetc(f);
			size_t idx = 0;
			pos_str = (char *)malloc(1);
			do {
				pos_str[idx++] = c;
				pos_str = (char *)realloc(pos_str, idx+1);
				c = fgetc(f);
			} while (c != '.');
			pos_str[idx] = '\0';
			sscanf(pos_str, "%d", &pos);
			free(pos_str);
		}

		if(c == '.' && !readnum) {
			do {
				c = fgetc(f);
			} while (c != ',');
			c = fgetc(f);
			size_t idx = 0;
			do {
				switch(c) {
				case ' ': c = '_'; break;
				case ':': c = '_'; break;
				case 'A': c = 'a'; break;
				case 'C': c = 'c'; break;
				case 'G': c = 'g'; break;
				case 'T': c = 't'; break;
				default: break;
				}
				mutname[idx++] = c;
				c = fgetc(f);
			} while (c != ',');
			mutname[idx] = '\0';
			readnum++;
		}
	} while(1);

	printf("EOS\n");
	insertdb(db, numgrp, argv[3], argv[4], argv[5], &m, &hm);
	fclose(f);
	sqlite3_close(db);
	return 0;
}
