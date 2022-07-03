#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * a program that prints all possible different combinations of two digits
 * return (0)
 */

int main(void)
{
	char a;
	char b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (a != b)
			{
				putchar(a);
				putchar(‘, ’);
				putchar(ba);
			}
		}
	}
	return (0);
}
