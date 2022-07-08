#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - Prints numbers 1-100 but multiples of 3 print Fizz,
 * mulitples of 5 print buzz multiples of both print FizzBuzz
 *
 */
int fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
