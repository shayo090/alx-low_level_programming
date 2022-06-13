#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: first input integer
 * @b: second input integer
 * Return - 0
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
