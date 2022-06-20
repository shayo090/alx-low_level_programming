#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the diagonal
 *
 * @a : the matrix
 *
 * @size : the size of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int first;
	int second;

	first = 0;
	second = 0;
	for (i = 0; i < size; i++)
	{
		first += a[(size + 1) * i];
		second += a[(size - 1) * (i + 1)];
	}

	printf("%i, %i\n", first, second);

}
