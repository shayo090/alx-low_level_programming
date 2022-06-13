#include <stdio.h>
#include "main.h"

/**
 * print_array - function that print elements in an array
 *
 * @a : The pointer to the first element in the array
 *
 * @n : The number of elements in the array
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1 || i < n - 1)
			printf(", ");
	}
	_putchar('\n');
}
