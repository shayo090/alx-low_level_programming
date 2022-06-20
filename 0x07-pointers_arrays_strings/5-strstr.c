#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack : main string
 *
 * @needle : substring
 *
 * Return: the pointer to the substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] == needle[j])
			{
				return (haystack + i);
			}
		}
	}
	return (0);
}
