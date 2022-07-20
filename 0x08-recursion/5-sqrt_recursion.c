#include "main.h"
#include <stddef.h>
/**
 ** do_sqrt_recursion - needs the extra parameter r to work
 ** @n: the natural number whose root to find
 ** @r: the root iterator
 **
 ** Return: the natural root of n or -1 if not found
 **/
int do_sqrt_recursion(int n, int r)
{
	if (r * r == n)
		return (r);
	else if (r * r > n)
		return (-1);
	return (do_sqrt_recursion(n, r + 1));
}


/**
 ** function - returns the natural square root of a number
 **
 ** Return: if n does not have a natural square root,
 ** the function should return -1
 **/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (do_sqrt_recursion(n, 0));
}

