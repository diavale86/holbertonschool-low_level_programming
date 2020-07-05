#include "holberton.h"
#include <stdio.h>

/**
 *main - function
 *@argc: The number of command line arguments
 *@argv: containing the program command line arguments
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
