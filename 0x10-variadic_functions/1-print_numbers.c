#include "variadic_functions.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 *
 * @separator : the separator
 *
 * @n : number of numbers to be printed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	int num;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(list, int);

		if (separator == 0 || i == 0)
		{
			printf("%i", num);
		}
		else
		{
			printf("%s%i", separator, num);
		}
	}
	va_end(list);

	printf("\n");
}
