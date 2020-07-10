#include "holberton.h"

/**
 *malloc_checked - function that allocates memory using
 *@b: memory quantity
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
