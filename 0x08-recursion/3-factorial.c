#include "main.h"

/**
 * factorial - Returns a factorial of a given nunber
 * @n: The given number
 *
 * Return: The factorial
 */
int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
