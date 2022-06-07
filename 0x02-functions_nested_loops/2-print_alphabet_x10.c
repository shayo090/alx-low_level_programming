#include "main.h"

/**
 * print_alphabet_x10: prints alphabet ten times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i;
	int no_lines;

	while (no_lines <= '9')
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		_putchar('\n');
		no_lines++;
	}
}
