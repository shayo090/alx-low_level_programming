#include "main.h"

/**
 * islower - checks for lowercase character
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	int i;
	int lower_case;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower_case = 1;
		else
			lower_case = 0;
	}
}
