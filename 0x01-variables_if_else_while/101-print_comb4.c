#include <stdlib.h>
#include <stdio.h>

/*
 * program that prints all possible different combinations of three digits
 * returns (0)
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a  = 0; a < 9; a++)
	{
		putchar(a);
		for (b = 0; b <= 9; b++)
		{
			putchar(b);
			for (c = 0; c <= 9; c++)
			{
				if (a != b && a != c)
				{
					putchar(a);
					putchar(‘, ’);
					putchar(b);
					putchar(‘, ’);
				}
			}
		}
	}
	return (0);
}
