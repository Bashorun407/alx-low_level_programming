#include "main.h"
/**
 * this function converts a string to an integer
 * it returns the result of the conversion if found
 */
int _atoi(char *s)
{
	int i, count, num;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			count++;
			num = s[i];
			return (num); /*returning the value of the number gotten*/
		}
		else
			continue;
	}
	if (count == 0)
		return (0); /*return 0 if there is no number in the string*/
}

