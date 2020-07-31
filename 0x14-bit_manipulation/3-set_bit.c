#include "holberton.h"
/**
  * set_bit - sets the value of a bit to 1 at a given index.
  * @n: pointer.
  * @index: index.
  * Return: sets the value of a bit to 1 at a given index.
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n += 1 << index;
		return (1);
	}
	return (-1);
}
