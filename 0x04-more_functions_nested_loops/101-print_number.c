#include "main.h"

/**
 * print_number - prints an integer
 * @n: input value
 * Return: Always 0.
 */

void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		_putchar(-n);
	}
	else
	{
		_putchar(n);
	}
}
