#include <stdio.h>

/**
 * fizz_buzz - Prints numbers 1-100 but multiples of 3 print Fizz,
 * mulitples of 5 print buzz multiples of both print FizzBuzz
 *
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3)
		{
			printf("Fizz");
		}
		else if (i % 5)
		{
			printf("Buzz");
		}
		else if (i % 3 && i % 5)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
}
