#include "main.h"
/**
 * this program prints the 9 times table, starting with 0
 */
int main(void)
{
	nine_times();
	_putchar('\n');

	return (0);
}

void nine_times(void)
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		int j;
		int r;
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
			_putchar(r);
			if (j < 9)
				_putchar(',');
			else if (j == 9)
				_putchar('$');
		}
		_putchar('\n');
	}
}

