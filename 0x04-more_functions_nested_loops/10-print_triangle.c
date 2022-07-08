#include "main.h"

/**
 * print_triangle - Prints a triangle using #
 * @size: The number of triangle
 *
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i;

		for (i = 1; i <= size; i++)
		{
			_putchar(32);
			_putchar(35);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
