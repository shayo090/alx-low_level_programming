#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name
 *
 * @argc : number of arguments passed
 *
 * @argv : array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, multiple;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	multiple = i * j;
	printf("%d\n", multiple);
	return (0);
}
