#include "main.h"
void check_alphabet(char c);
/**
 * Program checks for alphabetic character
 * returns 1 if a letter is lower or uppercaser
 * returns 0 otherwise
 */
int main(void)
{
	int r;
	char x = 'H';
	void check_alphabet(x)
	{
		r = _isalpha(x);
		if (r == 1)
			_putchar(r + '0');
		else if (r == 0)
			_putchar(r + '0');
	}
	_putchar('\n');

	return (0);
}

