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
	int **A;

	if (width <= 0 || height <= 0)
		return (0);
	A = (int **) malloc(height * sizeof(int *));

	if (A == NULL)
	{
		free(A);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		A[i] = malloc(sizeof(int) * width);
		if (A[i] == NULL)
		{
			for (j = i; j >= 0; j--)
				free(A[j]);
			free(A);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			A[i][j] = 0;
	}

	return (A);
}
