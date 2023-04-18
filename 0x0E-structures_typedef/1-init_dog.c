#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialises a variable of type struct dog
 * @d: struct variable
 * @name: name of dog
 * @age: age of dog
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
