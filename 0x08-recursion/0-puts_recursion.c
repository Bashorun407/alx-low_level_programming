#include "main.h"
#include <stddef.h>
/**
 ** _puts_recursion: prints a string followed by a new line recursively
 ** @s: a string or pointer to a string to be printed
 **
 ** Return: void..
 **/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s++);
}

