#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: string
 * Return: Always 0.
 */

char *string_toupper(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		if (s[len] <= 'z' && s[len] >= 'a')
		{
			s[len] = s[len] - 32;
		}
		len++;
	}
	return (s);
}
