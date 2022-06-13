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
	int i;
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	while (len >= 0)
	{
		_putchar(len);
		len--;
	}
	_putchar('\n');
}
