#include "main.h"

/**
 * more_numbers - Prints 10x the numbers followed by a new line
 *
 */
void more_numbers(void)
{
	int num, i;

	for (i = 1; i <= 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
