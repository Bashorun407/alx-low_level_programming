#include "main.h"
/**
 ** main - check the code
 **
 ** Return: Always 0.
 **/
char *_strstr(char *haystack, char *needle)
{
	int i, j, x, count;
	char *ptr;

	i = count = 0;
	ptr = NULL;
	while (needle[i] != '\0')
		count++;
	for (j = 0; haystack != '\0'; j++)
	{
		if (haystack[j] == needle[j])
		{
			ptr = &haystack[j];

			for (x = 0;  x < count; j++)
			{
				if ((*ptr++ != needle[x + 1]) && (x != count -1))
				{
					x = 0;
					break;
				}
				if (*ptr == needle[x])
					x++;
			}
		}
		if (x == count - 1)
		{
			ptr = &haystack[j];
			break;
		}
	}
	return (ptr);
}

