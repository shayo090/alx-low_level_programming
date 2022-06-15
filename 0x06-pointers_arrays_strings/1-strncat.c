#include "main.h"

/**
 * *_strncat - a function that concatenates two strings.
 *
 * @src: source
 *
 * @dest: destination
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1;
	int len2;

	len2 = 0;
	while (dest[len2] != '\0')
	{
		len2++;
	}

	len1 = 0;
	while (src[len1] != 0)
	{
		if (len1 < n)
		{
			dest[len2 + len] = src[len1];
		}
		else
		{
			break;
		}
		len1++;
	}
	return (dest);
}
