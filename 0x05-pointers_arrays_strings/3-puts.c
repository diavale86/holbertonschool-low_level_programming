#include "holberton.h"

/**
 * _puts -function that prints a string
 * @str: function that prints a string, followed by a new line
 * Return: Always 0.
 */

void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar(10);
}
