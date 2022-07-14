#include "main.h"
/**
 * this funtion concatenates two strings
 * returns a pointer to the string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;

	while (dest[i] != '\0')
		i++; /*to get the length/size of dest string*/
	while (src[j] != '\0')
		dest[i++] = src[j++]; /*to begin to join src characters to dest string*/
	dest[i] = '\0';
	return (dest);
}

