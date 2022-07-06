#include "main.h"

/**
 * Checks for alphabetic character
 *
 * Return 1 if c is a letter and 0 otherwise
 */
int _isalpha(int c)
{
	char lower = 'a';
	char upper = 'A';
	char digits = '0';

	while (lower <= 'z' && upper <= 'Z' && digits <= '9')
	{
		if (c == lower || c == upper || c == digits)
		{
			return (0);
		} else 
		{
			return (1);
		}
		lower++;
		upper++;
		digits++;
	}
	
	return (0);
}
