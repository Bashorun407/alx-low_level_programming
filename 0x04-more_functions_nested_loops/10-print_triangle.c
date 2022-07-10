#include "main.h"
/**
 ** main - check the code
 **
 ** Return: Always 0.
 **/
int main(void)
{
	void print_triangle(int size)
	{
		if (size <= 0)
			_putchar('\n');
		else if (size > 0)
		{
			int i;

			for (i = 1; i <= size; i++)
			{
				int j;

				for (j = 0; j < i; j++)
					_putchar('#');
				_putchar('\n');
			}
		}
	}
	return (0);
}

