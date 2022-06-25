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
	int money;
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	coins = 0;
	while (money >= 25)
	{
		coins++;
		money -= 25;
	}
	while (money >= 10)
	{
		coins++;
		money -= 10;
	}
	while (money >= 5)
	{
		coins++;
		money -= 5;
	}
	while (money >= 2)
	{
		coins++;
		money -= 2;
	}
	while (money >= 1)
	{
		coins++;
		money -= 1;
	}
	printf("%i\n", coins);
	return (0);
}
