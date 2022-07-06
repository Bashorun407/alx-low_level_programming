#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	char alph[] = "abcdefghijklmnopqrstuvwxyz";

	while (i != '\0')
	{
		_putchar(alph[i]);
		i++;
	}
	_putchar('\n');
	print_alphabet();

	return (0);
}

