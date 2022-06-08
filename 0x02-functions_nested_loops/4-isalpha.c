#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: input value
 * Return: Always 0.
 */

int _isalpha(int c)
{
	int i;

	for (i = 'a'; i = 'z'; i++)
		for (i = 'A'; i = 'Z'; i++)
			if ( i ==c )
			{
				return (1);
			}
	return (0);
}
