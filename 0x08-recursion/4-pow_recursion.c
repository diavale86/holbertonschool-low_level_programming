#include "holberton.h"

/**
 *factorial - returns the factorial of a given number
 *@x: value x
 *@y: power y
 *
 *Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}

	return (x * _pow_recursion(x, y - 1));
}
