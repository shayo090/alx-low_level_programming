#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_binary - A function that prints a binary number without % or /
 *
 * @n: The number to be printed
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	_divide(n);
}

/**
  * _divide - division
  *
  * @n: number
  *
  * Return: nothing
  */
void _divide(unsigned long int n)
{
	if (n < 1)
		return;

	_divide(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
