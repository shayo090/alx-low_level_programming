#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of intergers
 *
 * @min : minimum value
 *
 * @max : maximum value
 *
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *array;
	int len;
	int i;

	if (min > max)
	{
		return (0);
	}

	len = max - min;

	array = malloc(sizeof(int) * (len + 1);
	
	if (array == 0)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		array[i] = min++;
	}

	return (array);
}
