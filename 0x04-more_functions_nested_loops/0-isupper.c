#include "main.h"
/**
 ** main - check the code.
 **
 ** Return: Always 0.
 **/
int main(void)
{
	int _isupper(int c)
	{
		char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		int i;

		for (i = 0; i < 26; i++)
		{
			if (c == alpha[i])
				return (1);
			else
				return (0);
		}
	}
}

