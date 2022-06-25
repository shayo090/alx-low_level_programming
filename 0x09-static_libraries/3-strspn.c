#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: String where substring will look.
 *
 * @accept: substring of accepted chars
 *
 * Return: length of occurence.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
