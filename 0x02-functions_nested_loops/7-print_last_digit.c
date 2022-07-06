#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @number: The number passed as an argument
 *
 * Return: 0 if successful
 */
int print_last_digit(int number)
{
	int last;

	if (number < 0)
	{
		last = (number % 10) * -1;
	} else
	{
		last = number % 10;
	}
	_putchar(last + '0');
	return (last);
}
