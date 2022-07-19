#include "main.h"
/**
 ** main - check the code
 **
 ** Return: Always 0.
 **/
char *_strchr(char *s, char c)
{
	int i;
	char *ptr;

	i = 0;
	ptr = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			ptr = &s[i];/* assigning the first occurrence of c to pointer ptr*/
			return (ptr);
		}
		i++;
	}
	return (ptr);
}

