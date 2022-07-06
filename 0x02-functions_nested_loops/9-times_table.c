#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 */
void times_table(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = 0;

		while (j <= 9)
		{
			_putchar(i);
			_putchar(j);
			j++;
		}
		i++;
	}
}
