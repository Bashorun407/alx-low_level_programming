#include <stdio.h>
/*
 * This program prints the numbers from 1 to 100
 * for multiples of three prints fizz
 * for multiples of five prints Buzz
 * for multiples of 3 and 5 prints FizzBuzz
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else
			printf(i);
		print(" ");
	}
	printf("\n");

	return (0);
}

