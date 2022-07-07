#include "main.h"

/**
 * _isupper - Checks for upper case characters
 * @c: Takes in the arguement which is a character
 *
 * Return: 1 if successful & 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		_putchar(c);
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
