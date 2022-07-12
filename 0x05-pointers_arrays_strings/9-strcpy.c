#include "main.h"
/**
 * this function copies string pointed to by one pointer to
 * buffer pointed to by another pointer
 * returns a pointer to a character
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	/* copies the string pointed to by src to arr[] array*/
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

