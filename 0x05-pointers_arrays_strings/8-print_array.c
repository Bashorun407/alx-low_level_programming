#include <stdio.h>
#include "main.h"
/**
 * this function prints n elements of an array of integers,
 * followed by a new line
 * returns void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf(a[i], ", ");
	}
	_putchar('\n');
}

