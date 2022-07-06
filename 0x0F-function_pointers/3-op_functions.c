#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition
 * @a : an integer
 * @b : an integer
 * Return : sum of a and b
 */

int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - subtraction
 * @a : an integer
 * @b : an integer
 * Return : diff between a and b
 */

int op_sub(int a, int b)
{
	int diff;
	
	diff = a - b;
	return (diff);
}

/**
 * op_mul -multiplication
 * @a : an integer
 * @b : an integer
 * Return : multiplication of a and b
 */

int op_mul(int a, int b)
{
	int mul;
	
	mul = a * b;
	return (mul);
}

/**
 * op_div - division
 * @a : an integer
 * @b : an integer
 * Return : division of a by b
 */

int op_div(int a, int b)
{
	int div;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	div = a / b;
	return (div);
}


/**
 * op_mod - modulus
 * @a : an integer
 * @b : an integer
 * Return : modulus of a and b
 */

int op_mod(int a, int b)
{
	int mod;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	mod = a + b;
	return (mod);
}
