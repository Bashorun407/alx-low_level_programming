#include “main.h”

/**
 * _putchar function prints the characters “_putchar”
 */
int main(void)
{
	int x = 0;
	char text[] = “_putchar”;

	while (text[x] != ‘\0’)
	{
		_putchar(text[x]);
		x++;
	}
	_putchar(‘\n’);

	return (0);
}

