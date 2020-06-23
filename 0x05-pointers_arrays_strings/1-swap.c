#include "holberton.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: swap integers.
 * @b: swap
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int v;

	v = *a;
	*a = *b;
	*b = v;
}
