#include "main.h"
/**
 ** main - check the code
 **
 ** Return: Always 0.
 **/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count;
	int *ptr;

	i = j = count = 0;
	while (accept[i] ! = '\0')
		i++;
	while (j < i)
	{
		if ((accept[j] == s[j]) && (accept[j] != '\0'))
			count++;
	}
	return (count);
}

