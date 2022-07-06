#include "main.h"

void check_lower(char a);
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char x = 'A';

	check_lower(x)
	{
		int r;
		r = _islower(a);
		if (r == 1)
			putchar(r + '0');
		else if (r == 0)
			_putchar(r + '0');
	}
	_putchar('\n');

	return (0);
}

