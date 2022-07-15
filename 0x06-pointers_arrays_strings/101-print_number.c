#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Integer parameter
 *
 */
void print_number(int n)
{
	unsigned int unsint;

	unsint = n;

	if (n < 0)
	{
		_putchar('-');
		unsint = -n;
	}

	if (unsint / 10 != 0)
	{
		print_number(unsint / 10);
	}

	_putchar((unsint % 10) + '0');
}
