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

	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
		len1 = 0;
	else
	{
		while (s1[len1])
			len1++;
	}
	if (s2 == NULL)
		len2 = 0;
	else
	{
		while (s2[len2])
			len2++;
	}
	t = malloc((len1 + len2 + 1) * sizeof(char));
	if (t == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		t[i] = s1[i];
	for (i = 0; i <= len2; i++)
	{
		if (s2 == NULL)
		{
			t[len1] = 0;
			break;
		}
		t[len1 + i] = s2[i];
	}
	return (t);
}
