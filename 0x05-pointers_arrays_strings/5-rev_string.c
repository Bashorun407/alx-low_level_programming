#include "main.h"
/**
 * this function reverses a string
 * the function returns void
 */
void rev_string(char *s)
{
	int i, count;

	/* getting the size of the value of *s */
	for (i = 0; s[i] != '\0'; i++)
		count++;

	int j, a;
	a = 0;
	char arr[];

	/* copying the contents of *s into arr[] in reverse order */
	for (j = count; count > 0; j--)
	{
		arr[a] = s[j - 1];
		a++;
	}

	int b;

	/* copying the character contents of arr[] to *s */
	for (b = 0; b < count; b++)
		s[b] = arr[b];
}

