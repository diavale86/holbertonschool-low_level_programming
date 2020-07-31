#include "holberton.h"

/**
  * get_bit - returns the value of a bit at a given index.
  * @n: unsigned long int.
  * @index: index.
  * Return: the value of the bit at index index or -1 if an error occured
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int retorn;

	if (index > 64)
		return (-1);
	retorn = n >> index;
	return (retorn & 1);
}
