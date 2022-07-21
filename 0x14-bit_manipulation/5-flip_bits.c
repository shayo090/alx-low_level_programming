#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - A function that gets number of bits needed to flip
 *
 * @n: How many bit flips are needed to equal m for n
 *
 * @m: The number to set other equal
 *
 * Return: The number of fliped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 0, count = 0;

	mask = n ^ m;
	while (mask)
	{
		if (mask & 1)
		{
			count++;
		}

		mask >>= 1;
	}

	return (count);
}
