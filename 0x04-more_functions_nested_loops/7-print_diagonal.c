#include "holberton.h"

/**
 * print_diagonal - diagonal line on the terminal.
 *@n: print that draws a diagonal line on the terminal.
 */

void print_diagonal(int n)
{
	int s;
	int j;

	for (s = 0; s < n; s++)
	{
		for (j = 0; j < s; j++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar ('\n');
}
