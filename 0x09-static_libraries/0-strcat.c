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
	int len_dest;
	int len_src;
	int i;

	len_dest = 0;
	while (dest[len_dest] != 0)
		len_dest++;

	len_src = 0;
	while (src[len_src] != 0)
		len_src++;

	for (i = 0; i <= len_src; i++)
		dest[len_dest + i] = src[i];

	return (dest);
}
