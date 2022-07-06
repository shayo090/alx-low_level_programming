#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer
 *
 * @array : the array
 *
 * @size : the size of the array
 *
 * @cmp : comparer function
 *
 * Return: the first index where cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
