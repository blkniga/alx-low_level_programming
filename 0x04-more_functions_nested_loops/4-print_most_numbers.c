#include "main.h"

/**
 * print_most_numbers - Print numbers 0-9 exclude 2 & 4 + new line
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
