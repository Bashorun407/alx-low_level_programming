#include "main.h"
#include <stddef.h>
/**
 ** _strlen_recursion - prints the length of a function using recursion
 **@s: a pointer to a string or a string whose length is to be measured
 ** Return: Always 0.
 **/
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s++));
	return (0);
}

