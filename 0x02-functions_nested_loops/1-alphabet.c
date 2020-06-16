#include "holberton.h"

/**
 * print_alphabet - Entry ponit
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alfa;

	for (alfa = 'a'; alfa <= 'z'; alfa++)
	{
		_putchar(alfa);
	}
	_putchar ('\n');

}
