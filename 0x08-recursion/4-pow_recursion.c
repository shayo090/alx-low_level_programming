#include "main.h"

/**
 * _pow_recursion - function that retruns some value
 *
 * @x : base number
 *
 * @y : power
 *
 * Return: the result of exponential
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
