#include "main.h"

/**
 * _islower - checks if character input is lowercase or not
 * @c: An input charater
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
