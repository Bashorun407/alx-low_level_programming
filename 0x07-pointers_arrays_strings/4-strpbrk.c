#include "main.h"
/**
 ** main - check the code
 **
 ** Return: Always 0.
 **/
char *_strpbrk(char *s, char *accept)
{
	int i, j, x, count;
	int *ptr;

	i = j = x = count = 0;
	ptr = NULL;
	while (accept[i] != '\0')
	{
		i++;
	}

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == accept[j])
		{
			for (x = j; x < (j + i); x++)
			{
				if ((accept[x] == s[x]) && (count != i))
					count++;
				else if ((accept[x] != s[x]) && (count != i))
				{
					count = 0;
					break;
				}
			}
		}

		if (count == i)
		{
			ptr = s + j;
			break;
		}
	}
	return (ptr);
}

