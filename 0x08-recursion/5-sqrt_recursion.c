#include "main.h"
int sqrt_finder(int n, int i);

/**
 * _sqrt_recursion - function to find the square root of a number
 *
 * @n : the number
 *
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt_finder(n, 1));
}

/**
 * sqrt_finder - helper function to get square root
 *
 * @n : the number
 *
 * @i : the square root
 *
 * Return: the square root
 */

int sqrt_finder(int n, int i)
{
	if (i * i > n || n < 0)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (sqrt_finder(n, i + 1));
}
