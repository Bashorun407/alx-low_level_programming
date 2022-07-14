#include "main.h"
/**
 * a function that changes all lowercase letters of a string to uppercase
 * returns a pointer to the converted string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32l
	}

	return (s);
}

