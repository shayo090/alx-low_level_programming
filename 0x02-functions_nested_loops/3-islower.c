#include "main.h"

/**
 * islower - checks for lowercase character
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
