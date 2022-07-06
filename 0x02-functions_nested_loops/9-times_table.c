#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 */
void times_table(void)
{
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			_putchar(i);
			_putchar(j);
		}
	}
}
