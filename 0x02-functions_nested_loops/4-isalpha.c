#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: takes in a value
 *
 * Return: 1 if c is a letter and 0 otherwise
 */
int _isalpha(int c)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z' && upper <= 'Z')
	{
		if (c == lower || c == upper)
		{
			return (1);
		} else if (c != lower || c != upper)
		{
			return (1);
		}
		lower++;
		upper++;
	}
	return (0);
}
