#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: The number of times the character should be printed
 *
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar(' ');
			_putchar('\\');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
