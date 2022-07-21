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
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	}

	return (-1);
}
