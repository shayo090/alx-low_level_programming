#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long m;
	float f;

	printf("The size of an int, %ln byte(s)\n", (unsigned long)sizeof(i));
	printf("The size of a char, %ln byte(s)\n", (unsigned long))sizeof(c));
	printf("The size of a long int, %ln byte(s)\n,", (unsigned lon)sizeof(l));
	printf("The size if long long int, %ln bytes(s)\n", (unsigned long)sizeof(m));
	printf("The size of a float, %ln byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
