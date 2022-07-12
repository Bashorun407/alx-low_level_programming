#include "main.h"
/**
 * this function prints a string in reverse, followed by a new line
 * this function returns void
 */
void print_rev(char *s)
{
	int i, j, count;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	for (j = count ; j > 0; j--)
		_putchar(s[j - 1]);
	_putchar('\n');
}

