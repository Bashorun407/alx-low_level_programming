#include "main.h"
/**
 * this function converts a string to an integer
 * it returns the result of the conversion if found
 */
int _atoi(char *s)
{
	int i, count, num, hold;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			count++;
			num = s[i] - '0';
			if (s[i + 1] >= '0' && s[i + 1] <= '9')
			{
				for (j = i + 1; (s[j] >= '0' && s[j] <= '9') && s[j] != ' '; j++)
				{
					hold = s[j] - 0;
					num * 10;
					num + s[j];
				}
			}
			if (s[i - 1] == '-')
				-1 * num;
			return (num);
		}
	}
	if (count == 0)
		return (0);
}

