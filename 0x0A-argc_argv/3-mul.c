#include "holberton.h"
#include <stdio.h>

/**
 *main - function multiplie two numbers
 *@argc: The number of command line arguments
 *@argv: containing the program command line arguments
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int s;
	int p;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	s = atoi(argv[1]);
	p = atoi(argv[2]);
	printf("%d\n", s * p);
	return (0);
}
