#include "main.h"
/**
 * this function returns the length of a string
 */

/*function to return  length of string*/
int _strlen(char *s)
{
	int i, count;
	count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	/*returning count*/
	return (count);
}

