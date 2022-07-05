#include "main.h"

/**
 * Main - Prints 10x the alphabet in lowercase + a new line
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int counter = 1;

	while (counter <= 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		counter++;
	}
	_putchar('\n');
}
