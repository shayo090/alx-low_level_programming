#include "main.h"

/**
 * cap_string - funciton that capitalizes all words in a string
 *
 * @s : string
 *
 * Return: pointer to the string s
 */

char *cap_string(char *s)
{
	int sep[] = {32, 9, 10, 44, 46, 59, 33, 63, 34, 123, 125, 40, 41};
	int len;
	int i;

	len = 0;
	while (s[len])
	{
		for (i = 0; i < 13; i++)
		{
			if ((len == 0 || s[len - 1] == sep[i]) && s[len] <= 'z' && s[len] >= 'a')
				s[len] -= 32;
		}

		len++;
	}

	return (s);

}
