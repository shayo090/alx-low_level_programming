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
	char *s;
	int len;
	int i;

	len = 0;
	if (str == NULL)
		return (NULL);

	while (str[len] != 0)
		len++;
	s = malloc((len + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		s[i] = str[i];
	return (s);
}
