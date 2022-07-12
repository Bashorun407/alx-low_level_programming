#include "main.h"
/**
 * this function prints half of a string
 * returns void
 */
void puts_half(char *str)
{
	int i, j, half, count;

	count = 0;

	for (i =  0; str[i] != '\0'; i++)
		count++;
	/* initializing half with the value of half of count*/
	half = (int)count / 2;

	for (j = 0; j < half; j++)
		_putchar(str[j]);
	_putchar('\n');
}

