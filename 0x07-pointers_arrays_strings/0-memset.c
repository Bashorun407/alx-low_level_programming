#include "main.h"
/**
 ** simple_print_buffer - prints buffer in hexa
 ** @buffer: the address of memory to print
 ** @size: the size of the memory to print
 **
 ** Return: Nothing.
 **/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		s[i] = &b;
		i++;
	}
	return (s);
}

