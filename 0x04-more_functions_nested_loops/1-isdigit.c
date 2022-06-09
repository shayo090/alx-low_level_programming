#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit
 * @c: input data
 * Return: 1 if c is a digit or 0 otherwise
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
