#include "variadic_functions.h"

/**
 * sum_them_all - function that sums all its parameters
 *
 * @n : number of args passed
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(list, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
