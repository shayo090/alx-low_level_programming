#include "main.h"

/**
 * print_rev -prints a string in reverse
 *
 * @s: first character in the string
 *
 * return - void
 */

void print_rev(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	while (len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
