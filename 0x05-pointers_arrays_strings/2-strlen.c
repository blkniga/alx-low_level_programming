#include "main.h"
#include <string.h>

/**
 * _strlen - Returns the length of a string
 * @s: The string passes into the function as a char
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	
	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
