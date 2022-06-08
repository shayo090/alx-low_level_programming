#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: An input number
 * Return: Always 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+1');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('00');
	}
	else
	{
		return (-1);
		_putchar('-1');
	}
}
