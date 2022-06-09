#include "main.h"

/**
 * 0-isupper - checks for upper case characters
 * @c: upper case value 
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isupper(int c)
{
	int i;

	for(i = 'A'; i <= 'Z'; i++)
		if (c == i)
		{
			return (1);
		}
	return (0);
}
