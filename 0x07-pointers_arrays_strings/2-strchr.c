#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s : The string
 *
 * @c : the character
 *
 * Return: the position of the first occurance of the character
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] >= 0)
	{
		if (s[i] == c)
		{
			return (s[i]);
		}
		i++;
	}
	return ('\0');
}
