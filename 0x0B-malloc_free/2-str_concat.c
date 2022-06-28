#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatinates two strings
 *
 * @s1 : the first string
 *
 * @s2 : the second string
 *
 * Return: the pointer to the concatinated string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int i;
	char *t;

	if (s1 == 0)
	{
		s1 = '\0';
	}
	if (s2 == 0)
	{
		s2 = '\0';
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)

	for (len2 = 0; s2[len2] != '\0'; len2++)

	t = malloc(sizeof(char) * (len1 + len2 + 1));

	for (i = 0; i < len1; i++)
	{
		t[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		t[i + len1] = s2[i];
	}
	return (NULL);
}
