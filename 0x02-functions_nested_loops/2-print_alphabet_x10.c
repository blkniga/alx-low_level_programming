#include "main.h"

/**
 * print_alphabet_x10 - Prints 10x the alphabet in lowercase + a new line
 *
 */
void print_alphabet_x10(void)
{
	int counter = 1;

	while (counter <= 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		counter++;
		_putchar('\n');
	}
}
