#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer
 *
 * @array : the array
 *
 * @size : the size of the array
 *
 * @cmp : comparer function
 *
 * Return: the first index where cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int value;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			value = cmp(array[i]);

			if (value != 0)
				return (i);
		}
	}

	return (-1);
}
