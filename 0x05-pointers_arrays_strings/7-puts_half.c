#include "main.h"
/**
 * this function prints half of a string
 * returns void
 */
void puts_half(char *str)
{
	int i, count;
	count = 0;

	for (i =  0; str[i] != '\0'; i++)
		count++;
	int j;
	int half;
	half = (int)count / 2;

	for (j = 0; j < half; j++)
		_putchar(str[j]);
	_putchar('\n');
}

