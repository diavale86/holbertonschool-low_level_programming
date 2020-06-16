#include "holberton.h"

/**
 * print_alphabet_x10 - Entry ponit
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alfa;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alfa = 'a'; alfa <= 'z'; alfa++)
		{
			_putchar(alfa);
		}
	_putchar('\n');
	}
}
