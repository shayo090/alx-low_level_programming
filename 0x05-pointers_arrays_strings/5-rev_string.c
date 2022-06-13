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
	int len;
	int i;
	int tmp;

	len = 0;
	while (s[len] != 0)
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
	}
}
