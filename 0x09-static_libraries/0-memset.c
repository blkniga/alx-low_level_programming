#include "main.h"

/**
 * _memset  - Fills memory to the constant byte
 * @s: The first parameter
 * @b: The second parameter
 * @n: The third parameter
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
