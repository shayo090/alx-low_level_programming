#include "main.h"

/**
 * print_alphabet_x10 - displays alphabet 10 times.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i;
	int no_lines;

	no_lines = '0';
	while (no_lines <= '9')
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		no_lines++;
	}
}
