#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: integer
 *
 * @n: number of elements of the array
 *
 * return - 0.
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	i = 0;
	while (a[i] != 0)
	{
		if (i < n / 2)
		{
			tmp = a[n - 1 - i];
			a[n - 1 - i] = a[i];
			a[i] = tmp;
		}
		i++;
	}
}

