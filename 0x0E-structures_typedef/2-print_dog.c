#include <stdio.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 *
 * @d : pointer to the dog
 *
 * Return : NULL
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->age == NULL)
	{
		d->age = 0;
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}

	printf("Name: %s\nAge: %0.2f\nOwner: %s\n", d->name, d->age, d->owner);
}
