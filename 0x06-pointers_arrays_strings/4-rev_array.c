#include "main.h"
/**
 * a function that reverses the content of an array of integers
 * n is the number of elements of the array
 * returns void
 */
void reverse_array(int *a, int n)
{
	int i, x;

	i = x = 0;
	while ((n > 0) && (i < n))
	{
		x = a[n - 1];/* x takses the last value of array a*/
		a[n - 1] = a[i];/* last element takes the value of the first element*/
		a[i] = x;/* first element takes the value of last element*/
		n--;/* n decreases by 1*/
		i++;/* i increases by 1*/
	}
}

