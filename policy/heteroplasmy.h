/*
 * Assumptions: "members" are
 * (1) collection of "true" mutations
 * (2) all at same mitomap position
 * (3) all same type of mutation (ex: T_to_A)
 */

#ifndef HETEROPLASMY_H
#define HETEROPLASMY_H

#define CUTOFF 0.02

/*
 * of mutation type (>= CUTOFF)
 */
int is_heteroplasmy(const int members, const int grp)
{
	double ratio = (double)members / (double)grp;
	return ratio >= CUTOFF ? 1 : 0;
}

#endif 
