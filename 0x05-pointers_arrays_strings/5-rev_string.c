#include "main.h"
/**
 * this function reverses a string
 * the function returns void
 */
void rev_string(char *s)
{
	int i, j, x, count;

	count = 0;

	/* getting the length of s[] array by incrementing count */
	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	/* now making attempts to reverse the string*/
	for (j = 0; s[j] != '\0'; j++)
	{
		/*place the first element of s[] into container x*/
		x = s[j];
		/*replace the current last element with first element of s[]*/
		s[j] = s[count];
		/* place the element in the container into the current last element */
		s[count] = x;
		/* decreasing count by 1 to reverse the next values */
		count--;
	}
}

