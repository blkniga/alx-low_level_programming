#include <stdio.h>
#include "main.h"

/**
 * print_dog - Prints a struct dog
 * @d: The struct dog
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil");
	}
	else
	{
		printf(d);
	}
}
