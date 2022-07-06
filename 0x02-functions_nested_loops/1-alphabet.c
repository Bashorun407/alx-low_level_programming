#include “main.h”

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char alph = ‘a’;

	while (alph <= ‘z’)
	{
		_putchar(alph);
		alph++;
	}
	print_alphabet();

	return (0);
}

