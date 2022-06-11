#include <stdio.h>

/**
 * main - does it work
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int i, j = 612852475143;

	for (i = 3; i < 12507; i++)
	{
		while (j % i == 0 && j != i)
			j = j / i;
	}
	printf("%lu\n", j);
	return (0);
}
