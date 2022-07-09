#include "main.h"
/**
 ** main - check the code
 **
 ** Return: Always 0.
 **/

void print_diagonal(int n)
{
	if (n == 0 || n < 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			int j;

			for (j = 0; j < n; j++)
				_putchar('\n');
			_putchar('\\$');
			_putchar('\n');
		}
	}
}

