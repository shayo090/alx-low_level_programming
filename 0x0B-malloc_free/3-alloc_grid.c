#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a 2 dimentional array of ints
 *
 * @width : width;
 *
 * @height : height;
 *
 * Return: pointer to the array or NULL
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **array;

	if (width <= 1 || height <= 1)
	{
		return (NULL);
	}

	array = malloc(sizeof(int *) * height);

	if (array == 0)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == 0)
		{
			free(array[i]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < height; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
