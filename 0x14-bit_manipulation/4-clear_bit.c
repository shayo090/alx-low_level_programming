#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * clear_bit - A function that sets a bit to 0 at given index
 *
 * @n: The number to modify
 *
 * @index: The index in the number to modify
 *
 * Return: 1 if it worked, or -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max = ~(max << index);
	if (max == 0x00)
	{
		return (-1);
	}

	*n &= max;
	return (1);
}
