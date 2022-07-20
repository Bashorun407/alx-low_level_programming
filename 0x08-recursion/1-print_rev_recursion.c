#include "main.h"
/**
 ** function - prints a string in reverse
 **
 ** Return: void.
 **/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s++);
	_putchar(*s);
}

