#include "main.h"

/**
 * _strcat - function to concatnate two strings
 *
 * @dest : The first string
 *
 * @src : The other one
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int len;
	int len1;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	len1 = 0;
	while (dest[len1] != '\0')
	{
		dest[len1] = src[len];
		len++;
		len1++;
	}
	dest[len1] = '\0';
	return (dest);
}
