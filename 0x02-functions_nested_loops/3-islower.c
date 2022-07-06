#include "main.h"

/**
 * Function that checks for lowercase character
 *
 * Return: 1 if character is lowercase & 0 otherwise
 */
int _islower(int c)
{
	char character = 'a';

	while (character <= 'z')
	{
		if (c == character)
		{
			return (1);
			break;
		} else
		{
			return (0);
			break;
		}
		character++;
	}
	return (0);
}
