#include "main.h"
/**
 ** main - check the code.
 **
 ** Return: Always 0.
 **/

int _isupper(char c)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	for (i = 0; i < 26; i++)
	{
		if (c == alpha[i])
			return (1);
	}
	return (0);
}

