#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that frees dogs
 *
 * @d : pointer to the dog
 *
 * Return - NULL
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		free(d->name);
		free(d->owner);
	}
}
