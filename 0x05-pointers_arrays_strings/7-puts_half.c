#include "holberton.h"

/**
 * puts_half - function that prints half of a string
 * @str: every other character of a string
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int j;

	for (j = 0 ; str[j] != '\0'; j++)
		;
	j = j + 1;
	for (j = j / 2; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
