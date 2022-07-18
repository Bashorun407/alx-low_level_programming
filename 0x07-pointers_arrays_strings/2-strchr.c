#include "main.h"
/**
 ** main - check the code
 **
 ** Return: Always 0.
 **/
char *_strchr(char *s, char c)
{
	int i;
	int *ptr;

	i = 0;
	ptr = s;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (ptr);
		else
			ptr++;
	}
	return (NULL);
}

