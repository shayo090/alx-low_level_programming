#include "main.h"

/**
 * _memset - function to fill memory with a constant byte
 *
 * @s : start of memory area
 *
 * @b : The character to fill the memory area
 *
 * @n : The size of memory area to be filled
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
