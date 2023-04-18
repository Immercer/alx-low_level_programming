#include <stdio.h>
#include "dog.h"

/**
 * print_dog - accesses members of struct dog and prints
 * @d: name of struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
