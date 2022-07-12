#include "main.h"
/**
 * this function copies string pointed to by one pointer to
 * buffer pointed to by another pointer
 * returns a pointer to a character
 */
char *_strcpy(char *dest, char *src)
{
	int i, count;
	static char arr[];

	/* copies the string pointed to by src to arr[] array*/
	for (i = 0; *src[i] != '\0'; i++)
	{
		arr[i] = *src[i];
		count++;
	}

	int j;

	/* copies the string in arr[] array to the buffer pointed to by *dest */
	for (j = 0; j <= count; j++)
		*dest[j] = arr[j];
	return (dest);
}

