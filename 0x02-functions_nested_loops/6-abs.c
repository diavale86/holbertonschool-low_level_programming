#include "holberton.h"

/**
 * _abs - Entry point
 *@v: char to check
 * Return: absolute value of a char
 */
int _abs(int v)
{
	if (v < 0)
	{
		v = v * -1;
	}
	return (v);
}
