#include "main.h"
/**
 * print_last_digit - function prints the last digit of a number
 * @r: An integer input
 * Return: last digit of number r
 */
int print_last_digit(int r)
{
        int i;

        if (r < 0)
                i = -1 * (r % 10);
        else
                i = r % 10;

        _putchar((i % 10) + '0');
}
