#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: returns a pointer to newly created dog structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len_name = 0, len_owner = 0, i;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	while (name[len_name])
		len_name++;

	while (owner[len_owner])
		len_owner++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_name = malloc(len_name + 1);
	if (new_name == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		new_name[i] = name[i];
	new_name[i] = '\0';

	new_owner = malloc(len_owner + 1);
	if (new_owner == NULL)
		return (NULL);
	for (i = 0; owner[i] != '\0'; i++)
		new_owner[i] = owner[i];
	new_owner[i] = '\0';

	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
