#include "main.h"
/**
 * this function prints a string, followed by a new line, to stdout
 * this function returns void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str[i] != '\0'; i++)
		_putchar(*str[i]);
	_putchar('\n');
}

