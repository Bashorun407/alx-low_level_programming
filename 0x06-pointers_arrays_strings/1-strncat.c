#include "main.h"
/**
 * this function concatenates/joins two strings up to a given number n
 * this function returns a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;

	while (dest[i] != '\0')
		i++;/*to get the size/length of dest string*/
	while ((src[j] != '\0') && n > 0)
	{
		dest[i++] = src[j++];/*joining src string to dest string up to n numbers*/
		n--;
	}
	return (dest);/*returning a pointer to the dest string*/
}

