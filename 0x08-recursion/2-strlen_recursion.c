#include "holberton.h"

/**
 *_strlen_recursion - function that returns the length of a string
 *@s:  length of a string
 *
 *
 *Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
