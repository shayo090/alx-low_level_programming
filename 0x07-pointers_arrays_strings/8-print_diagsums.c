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

	for (i = 0; i < size; i++)
	{
		first = first + a[i];
		second = second + a[(size - i) - 1];
		a = a + size;
	}
	printf("%d, %d\n", first, second);
}
