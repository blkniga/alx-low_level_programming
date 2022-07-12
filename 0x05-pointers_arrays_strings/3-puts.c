#include "main.h"

/**
 * _puts - Prints a string followed by a new line to the stdout
 * @str: The string passed as a parameter
 *
 */
void _puts(char *str)
{
	char statement = '';

	while (*str != '\0')
	{
		statement = statement + str;
		str++;
	}
	_putchar(statement);
}
