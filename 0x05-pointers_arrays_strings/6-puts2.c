#include "main.h"
/**
 * this function prints every character of a string followed by a new line
 * this function returns void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *str[i] != '\0'; i++)
		_putchar(*str[i]);
	_putchar('\n');
}

