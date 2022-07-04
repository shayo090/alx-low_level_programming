#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog
 *
 * @name : name og dog
 *
 * @age : dog's age
 *
 * @owner : nmae of owner
 *
 * Return :pointer of newly created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len_name;
	int len_owner;
	char *new_name;
	char *new_owner;
	int i;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	len_name = 0;
	while (name[len_name])
	{
		len_name++;
	}

	len_owner = 0;
	while (owner[len_owner])
	{
		len_owner++;
	}

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_name = malloc(len_name + 1);
	if (new_name == NULL)
	{
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		new_name[i] = name[i];
	}
	new_name = '\0';

	new_owner = malloc(len_owner + 1);
	if (new_owner == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; owner[i] != '\0'; i++)
		{
			new_owner[i] = owner[i];
		}
	}
	new_owner = '\0';

	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
