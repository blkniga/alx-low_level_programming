#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string passed
 *
 */
void rev_string(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	char state[len];

	while (len--)
	{
		state[len] = s[len];
	}
	return (state);
}
