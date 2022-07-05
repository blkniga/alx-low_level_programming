#include "main.h"

/**
 * Main - Prints 10x the alphabet in lowercase + a new line
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	}
	_putchar('\n');
}
