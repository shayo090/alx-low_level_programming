#include "main.h"

/**
 * put2 - a function that prints every other character of a string
 *
 * @str: string to print
 *
 * Return : void
 */

void puts2(char *str)
{
	int i;
	for (i = 0; str[i] != 0; i++;)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
}
