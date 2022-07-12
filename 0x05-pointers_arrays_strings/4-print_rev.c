#include "main.h"
#include <string.h>

/**
 * print_rev - Prints a string in reverse
 * @s: The strings passed to the function
 *
 */
void print_rev(char *s)
{
	int len = strlen(*s);
	char state[len] = *s;
	int i;

	for (i = len; i >= 0; i--)
	{
		_putchar(state[i])
	}
}
