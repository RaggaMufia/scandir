#ifndef DB_H
#define DB_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <sqlite3.h>

#define BUFF 1024
#define CALL "callback"
#define MUTNUM 21	// #elements in struct mutations
#define MUTNAMELEN 24	// like "g_to_c"

typedef struct mutations {
	int g_to__; // offset 0
	int g_to_a; // offset 1
	int g_to_c; // offset 2
	int g_to_t; // offset 3
	int t_to__; // offset 4
	int t_to_a; // offset 5
	int t_to_c; // offset 6
	int t_to_g; // offset 7
	int c_to__; // offset 8
	int c_to_a; // offset 9
	int c_to_t; // offset 10
	int c_to_g; // offset 11
	int a_to__; // offset 12
	int a_to_t; // offset 13
	int a_to_c; // offset 14
	int a_to_g; // offset 15
	int __to_t; // offset 16
	int __to_a; // offset 17
	int __to_c; // offset 18
	int __to_g; // offset 19
	int other_; // offset 20
} mutations; 

void add(mutations *, int, int);
int callback(void *, int, char **, char **);
int exec(sqlite3 *, char *, void *);
void insertdb(sqlite3 *, int, const char *, const char *, const char *, const mutations *, const mutations *);

#endif
