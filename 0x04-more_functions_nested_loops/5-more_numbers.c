#include "main.h"
/**
 ** main - check the code
 **
 ** Return: Always 0.
 **/

void more_numbers(void)
{
	int i;
	int j = 10;

	for (i = 0; i <= 14; i++)
	{
		j *= i;
		_putchar(i);
		_putchar(j);
	}
	_putchar('\n');
}
