#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: Name of the array
 * @n: The nth
 *
 */
void  print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i + 1 != n)
			printf(", ");
	}

	printf("\n");
}
