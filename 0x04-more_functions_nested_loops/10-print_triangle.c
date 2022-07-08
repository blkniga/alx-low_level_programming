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

		for (i = 0; i < size; i++)
		{
			int j, c;

			for (j = size - i; j > 1; j--;)
			{
				_putchar(32);
			}

			for (c = 0; c <= i; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
