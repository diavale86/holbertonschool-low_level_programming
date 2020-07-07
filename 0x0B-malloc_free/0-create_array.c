#include "holberton.h"
#include <stdio.h>

/**
 *create_array - function that creates an array of chars
 *@size: size of array
 *@c: char
 *
 *Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j;

	j = malloc(sizeof(c) * size);

	if (size == 0 || j == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(j + i) = c;
	}
	return (j);

}
