#include "holberton.h"
#include <stdio.h>
#include <ctype.h>

/**
 *main - function add
 *@argc: The number of command line arguments
 *@argv: containing the program command line arguments
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int s;
	int p;
	int j;

	j = 0;

	if (argc < 2)
	{
		puts("0");
	return (0);
	}

	for (s = 1; s < argc; s++)
	{
		for (p = 0; argv[s][p] != 0; p++)
		{
			if (isdigit(argv[s][p]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		j = j + atoi(argv[s]);

	}
	printf("%d\n", j);
	return (0);
}
