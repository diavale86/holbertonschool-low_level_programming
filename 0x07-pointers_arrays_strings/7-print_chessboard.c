#include "holberton.h"
#include <stddef.h>

/**
 *print_chessboard - function that prints the chessboard
 *@a: the array
 *
 *
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	int s;
	int j;

	for (s = 0; s < 8; s++)
	{
		for (j = 0; j < 8; j++)
			_putchar (a[s][j]);
		_putchar ('\n');
	}

}
