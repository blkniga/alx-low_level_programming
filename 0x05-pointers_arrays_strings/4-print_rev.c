#include "main.h"
#include <string.h>

/**
 * print_rev - Prints a string in reverse
 * @s: The strings passed to the function
 *
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	while (len--)
		_putchar(s[i]);

	_putchar('\n');
}
