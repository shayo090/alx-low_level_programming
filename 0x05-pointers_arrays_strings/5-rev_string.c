#include "main.h"

/**
 * rev_string -a function that reverses a string
 *
 * @s: string to reversed
 *
 * Return - void
 */

void rev_string(char *s)
{
	int i;
	
	i = 0;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
