#include "holberton.h"

/**
 * rev_string - function that prints a string, in reverse
 * @s: function that prints a string in reverse
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int j;
	int h;
	char c;

	for (j = 0 ; s[j] != '\0'; j++)
		;
	j--;
	for (h = 0 ; h < j ; h++, j--)
	{
		c = *(s + j);
		*(s + j) = *(s + h);
		*(s + h) = c;
	}
}
