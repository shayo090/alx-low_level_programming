#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * @n: an input integer of number of string to concatenate
 * Return: Apointer to concatened strings or NULL if it str is NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i = 0, lens1 = 0, lens2 = 0;

	if (s1 == NULL)
		s1 = "";

	for (; s1[lens1] != '\0'; lens1++)

	if (s2 == NULL)
		s2 = "";

	for (; s2[lens2] != '\0'; lens2++)

	if (n >= lens2)
		n = lens2;

	new_str = malloc(sizeof(char) * (lens1 + n + 1));
	if (new_str == NULL)
		return (NULL);

	for (; i < (lens1 + n); i++)
	{
		if (i <= lens1)
			new_str[i] = s1[i];
		else if (i >= lens1)
			new_str[i] = s2[i];
	}
	new_str[i] = '\0';
	return (new_str);
}
