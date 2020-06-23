#include "holberton.h"

/**
 * print_triangle - Entry point
 * @size: size of triangle
 * Return: no return
 */
void print_triangle(int size)
{
	int s;
	int j;

	for (s = 0; s < size; s++)
	{
		for (j = 0; j < size; j++)
		{
			if (j + s < size - 1)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar ('\n');
}
