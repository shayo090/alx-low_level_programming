#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that duplicates a string
 *
 * @str : string to be duplicated
 *
 * Return: NULL or pointer to the string
 */

char *_strdup(char *str)
{
	int len;
	int i;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)

	s = (char*)malloc(sizeof(char) * (len + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
