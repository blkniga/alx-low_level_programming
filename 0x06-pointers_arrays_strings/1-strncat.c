#include "main.h"

/**
 * _strncat - Concatenates two strings using @ bytes
 * @dest: Dest parameter
 * @src: Source parameter
 * @n: Number of bytes of src that should be concatenated with dest
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && n != j)
	{
		*(dest + i) = src[j];
		j++;
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
