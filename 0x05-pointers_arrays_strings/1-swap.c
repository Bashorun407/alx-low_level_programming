#include "main.h"
/**
 * this function swaps the values of two integers
 * this function does not return a value i.e void
 **/
void swap_int(int *a, int *b)
{
	int i =  0;

	/* putting the value of *a in i */
	i = *a;
	/* putting  the value of *b in *a */
	*a = *b;
	/* putting the value of i in *b */
	*b = i;
}

