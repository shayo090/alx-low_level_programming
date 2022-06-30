#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - function that concatenates two strings.
  * @s1: string 1
  * @s2: string 2
  * @n: number of string to concatenate
  *
  * Return: pointer
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int len2;
	char *str;
	unsigned int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)

	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)

	if (n >= len2)
	{
		n = len2;
	}

	str = malloc(len1 + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i], s1++;
	}
	for (i = 0; i < (len1 + n); i++)
	{
		str[i] = s2[i], s2++;
	}
	str[i] = '\0';
	return (str);
}
