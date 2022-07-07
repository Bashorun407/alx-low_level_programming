#include "main.h"
/**
 * function prints the last digit of a number
 */
int main(void)
{
	int r;
	r = last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');

	return (0);
}

int last_digit(int a)
{
	return (print_last_digit(a));
}

