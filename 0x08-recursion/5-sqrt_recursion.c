#include "main.h"

/**
 * _sqrt_recursion - function to find the square root of a number
 *
 * @n : the number
 *
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	int outcome;

	outcome = sqrt_finder(n, 1); 
	return (outcome);
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
	if (n < 0 || i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return(sqrt_finder(n, i + 1));
	}
}
