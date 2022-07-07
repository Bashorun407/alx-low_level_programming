#include "main.h"

/**
 * program prints the sign of a number
 */
int main(void)
{
	int n = 0;
	signcheck(n);

	return (0);
}

/* this function checks prints different signs based on different inputs*/
int signcheck(int x)
{
	int r;
	r = print_sign(x);
	if (r > 0)
		return (1);
	else if (r == 0)
		return (0);
	else if (r < 0)
		return (-1);
}

