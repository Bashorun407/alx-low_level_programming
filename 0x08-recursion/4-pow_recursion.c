#include "main.h"
/**
 ** _pow_recursion - function that prints the value of x raised to power y
 **@x: the base number to be raised to a power y
 **@y: the number or power or index that a number is raised to
 ** Return: Always 0.
 **/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

