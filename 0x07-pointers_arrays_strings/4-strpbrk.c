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
		i++;//counts the length or size of accept array or string
	}

	for ( j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == accept[j])
		{
			for (x = j; x < (j + i); x++)
			{
				if((accept[x] == s[x]) && (count != i))
					count++;
				else if((accept[x] != s[x]) && (count != i))
				{
					count = 0;
					break;
				}
			}
		}

		if (count == i) //checks if the first occurrence of the word has been reached
		{
			ptr = s + j;//assigns a pointer to the first occurrence of the word
			break;//breaks out of the first loop
		}
	}
	return (ptr);
}

