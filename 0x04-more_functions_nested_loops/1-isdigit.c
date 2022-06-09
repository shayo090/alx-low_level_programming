#include "main.h"
#include <stdio.h>

/**
 * 1-isdigit - checks for a digit
 * @c: input data
 * Return: Always 0.
 */

int _isdigit(int c)
{
	int i;
	for (i = '0'; i <= '9'; i++)
		if (c == i)
		{
			return (1);
		}
	return (0);
}
