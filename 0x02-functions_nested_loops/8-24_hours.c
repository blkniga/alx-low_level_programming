#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 *
 */
void jack_bauer(void)
{
	for (int H = 0; H <= 2; H++)
	{
		for (int h = 0; h <= 9; h++)
		{
			for (int M = 0; M <= 5; M++)
			{
				for (int m = 0; m <= 9; m++)
				{
					_putchar(H);
					_putchar(h);
					_putchar(':');
					_puchar(M);
					_putchar(m);
				}
			}

		}

	}
}
