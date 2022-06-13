julien@ubuntu:~/0x05$ cat 9-main.c
#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function that copies strings
 *
 * @src: source
 *
 * @dest: destination
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len + 1; i++)
		dest[i] == src[i];
	return (dest);
}
