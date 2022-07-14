#include <stdio.h>

void constructor(void) __attribute__ ((constructor));

/**
* constructor - a constructor of a function
*
* Return: Nothing.
*/

void constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
