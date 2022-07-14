#include "main.h"
/**
 * this function compares two strings
 * returns 1 if s1 is greater than s2
 * returns -1 if s1 is smaller than s2
 * returns 0 if s1 and s2 are equal
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

