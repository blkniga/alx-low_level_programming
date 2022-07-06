#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @number: The number passed as an argument
 *
 * Return: 0 if successful
 */
int print_last_digit(int number)
{
	int list[number - 1];
	int list2[number - 1];
	int i, j;

	if (number > 0)
	{
		for (i = 0; i <= number; i++)
		{
			list[i] = i;
		}
		_putchar(list[-1]);
	} else
	{
		for (j = 0; j <= number; j--)
		{
			list2[j] = j
		}
		_putchar(list[-1]);
	}
}
