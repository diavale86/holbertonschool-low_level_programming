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

	for (; s[j] >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar(10);
}
