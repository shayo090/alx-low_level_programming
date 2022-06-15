#include "main.h"

/**
 * *_strcpy - a function that copies a string.
 *
 * @src: source
 *
 * @dest: destination
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len;

	
	for (len = 0; len < n && src[len] != '\0'; len++)
	{
		dest[len] = src[len];
	}
	dest[len] = '\0';

	return (dest);
}
