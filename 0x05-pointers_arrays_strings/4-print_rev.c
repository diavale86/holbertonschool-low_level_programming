#include "holberton.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: function that prints a string in reverse
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
		;
	j--;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar(10);
}
