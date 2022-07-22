#include "main.h"

/**
 * _strncpy - Copies a string up to @n bytes
 * @dest: Destination parameter
 * @src: Source parameter
 * @n: Number of bytes of src that should be copied to dest
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		*(dest + i) = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
