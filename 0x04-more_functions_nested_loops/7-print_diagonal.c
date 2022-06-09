#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: character representing length of line
 *
 * Return: Always 0.Success
 */
void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
