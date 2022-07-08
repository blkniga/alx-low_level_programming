#include "main.h"

/**
 * print_square - Prints a # followed by a new line
 * @size: The size of the square
 *
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i;

		for (i = 1; i <= size; i++)
		{
			int x;

			for (x = 1; x <= size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
