#include "main.h"
/**
 * this function copies a string to another string up to n numbers
 * returns a pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while ((n > 0) && (src[j] != '\0'))
	{
		dest[i++] = src[j++];
		n--;
	}
	return (dest);
}

