#include "main.h"

/**
 * times_table - prints multiplication table from 0 to 12
 *
 * Return: Always 0 (Success)
 *
 */

void times_table(void)
{
	int num1;
	int num2;
	int t;

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		for (num2 = '0'; num2 <= '9'; num2++)
		{
			t = num1 * num2;
			_putchar('0' + t);
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
