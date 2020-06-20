#include "holberton.h"

/**
 * print_line - line in the terminal.
 *@n: print line straight line in the terminal.
 */

void print_line(int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		_putchar ('_');
	}
	_putchar ('\n');
}
