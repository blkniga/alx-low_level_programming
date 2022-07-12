#include "main.h"

/**
 * puts2 - prints every other character of a string, ...
 * starting with the first character.
 * @str: String passed to the function
 *
 */
void puts2(char *str)
{
	int len = 0;
	int i;

	for (i = 0; str[i]; i++)
	{
		if ((i % 2 == 0) && (i == 0))
			_putchar(s[i]);
	}
	_putchar('\n');
}
