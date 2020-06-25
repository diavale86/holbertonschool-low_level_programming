#include "holberton.h"

/**
 * print_array- Write a function that prints n elements of an array
 * @a: variable pointers
 * @n: inn
 * Return: void.
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", *(a + j));
		if (j < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
