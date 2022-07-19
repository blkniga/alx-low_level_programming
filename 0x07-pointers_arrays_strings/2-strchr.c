#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: First parameter
 * @c: Second parameter
 *
 * Return: Pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	}

	return (0);
}
