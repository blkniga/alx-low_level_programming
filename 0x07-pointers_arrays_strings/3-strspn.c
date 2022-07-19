#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: first parameter
 * @accept: second parameter
 *
 * Return: Number in bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
}
