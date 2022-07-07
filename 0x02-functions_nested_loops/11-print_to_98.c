#include <stdio.h>
#include "main.h"
/**
 *this program prints all natural numbers from a number n to 98
 */
int main(void)
{
	printo98(12);
	printo98(7);
	printo98(50);
	_putchar('\n');

	return (0);
}

/**
 * this function prints numbers from a number n to 98
 */
void printo98(int n)
{
	for (n; n <= 98; n++)
	{
		printf(n, ", ");
	}
}

