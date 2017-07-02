#ifndef RAWGROUP_H
#define RAWGROUP_H

#define CUTOFF_GROUPNUM 5

/*
 * A group is raw when >= CUTOFF_GROUPNUM sequences in it
 */
int within_rawgroup(const int i)
{
	return i >= CUTOFF_GROUPNUM ? 1 : 0;
}

#endif 
