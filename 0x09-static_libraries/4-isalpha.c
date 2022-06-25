#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: input value
 * Return: Always 0.
 */

int _isalpha(int c)
{
	int i, j;

	for (i = 'a'; i <= 'z'; i++)
		for (j = 'A'; j <= 'Z'; j++)
			if (i == c || j == c)
			{
				return (1);
			}
	return (0);
}
