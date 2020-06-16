#include "holberton.h"

/**
 *  _islowert - check the code for Holberton School students.
 *@c: if is appercase return 0, else return 1
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
