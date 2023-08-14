#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints dog
 * @d: dog to print
 * Return : void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("age: %f\n", d->age);
		printf("Name: %s\n", d->owner ? d->owner : "(nil)");
	}
}
