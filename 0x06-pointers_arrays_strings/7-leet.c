#include "main.h"

/**
 * leet - function that encodes strings into 1337
 *
 * @s : the string
 *
 * Return: pointer to the string
 */

char *leet(char *s)
{
	char a[] = {'A', 'E', 'O', 'T', 'L'};
	char b[] = {'4', '3', '0', '7', '1'};
	int i;
	int len;

	len = 0;
	while (s[len])
	{
		for (i = 0; i < 5; i++)
		{
			if (s[len] == a[i] || s[len] == a[i] + 32)
				s[len] = b[i];
		}

		len++;
	}

	return (s);
}
