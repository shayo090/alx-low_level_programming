#include "main.h"

/**
 * more_numbers - prints the numbers 0 to 14 10 times followed by a new line
 *
 * Return: Always 0 (Success)
 *
 */
void more_numbers(void)
{
	int i = 0 , j;
	while (i < 10)
	{
		j = 0;
		while(j < 14)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}				
