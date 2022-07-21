#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * get_bit - A function that gets a bit at index
 *
 * @n: The number to get bit from
 *
 * @index: The index where the bit get at
 *
 * Return: The value of the bit or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int comp_i = 0;

	while (n)
	{
		if (comp_i == index)
		{
			if (n % 2)
			{
				return (1);
			}
			else
			{
				return (0);
			}
		}

		n = n / 2;
		comp_i++;
	}
	if (index > comp_i && index < 63)
		return (0);

	return (-1);
}
