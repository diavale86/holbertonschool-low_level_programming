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
	int s;

	for (s = 0; s < argc; s++)
		printf("%s\n", argv[s]);
	return (0);
}
