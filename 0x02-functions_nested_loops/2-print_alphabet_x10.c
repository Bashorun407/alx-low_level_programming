#include "main.h"
/**
 * main -check the code
 *
 * Return: always 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;
		char apha[] = "abcdefghijklmnopqrstuvwxyz";
		while (apha[j] != '\0')
		{
			_putchar(apha[j]);
			j++;
		}
		i++;
	}
	_putchar('\n');

	return (0);
}

