#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @d: The struct dog
 *
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %s\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
