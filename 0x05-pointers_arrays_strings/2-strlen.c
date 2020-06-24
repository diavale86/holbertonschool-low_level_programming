#include "holberton.h"

/**
 * _strlen -returns the length of a string
 * @s: length of a string
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
		;

	return (j);
}
