#include "main.h"

/**
 * _islower - checks if character input is lowercase or not
 *
 * Return: Always 0.
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
