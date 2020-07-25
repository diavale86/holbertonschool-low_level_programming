#include <stdio.h>

void starup_main(void) __attribute__ ((constructor));

/**
 *starup_main - constructor
 *Return: void
 */

void starup_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
