#include "main.h"

/**
 * factorial - Returns a factorial of a given nunber
 * @n: The given number
 *
 * Return: The factorial
 */
int factorial(int n)
{
	int value;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		value = n * factorial(n - 1);
	}

	return (value);
}
