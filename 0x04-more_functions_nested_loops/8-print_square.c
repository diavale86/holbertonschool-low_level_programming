#include "holberton.h"

/**
 * print_square - Entry point
 * @size: size of square
 * Return: no return
 */
void print_square(int size)
{
	int s;
	int j;

	for (s = 0; s < size; s++)
	{
		for (j = 0; j < size; j++)
		_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar ('\n');
}
