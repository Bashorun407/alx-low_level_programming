#include “main.h”

/*
 * prints the alphabet in lowercase
 * returns (0)
 */

int main(void)
{
	char al = ‘a’;

	while (al <= ‘z’)
	{
		_putchar(al);
		_putchar(‘\n’);
	}

	print_alphabet();
	return (0);
}

