
#include "main.h"

/**
 * _strlen - function to return the length of a string
 *
 * @s : position of the first character in the string
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int len;i

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
