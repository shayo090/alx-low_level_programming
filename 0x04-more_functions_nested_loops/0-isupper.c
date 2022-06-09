#include "main.h"

/**
 * 0-isupper - checks for upper case characters
 * @c: upper case value 
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isupper(int c)
{
	char uppercase = 'A'

	for(upper = 'A'; upper <= 'Z'; upper++)
		if (c == upper)
		{
			return (1);
			break;
		}
	return (0);
}
