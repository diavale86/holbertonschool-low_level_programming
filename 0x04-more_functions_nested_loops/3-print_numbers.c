#include "holberton.h"

/**
 * print_numbers - print number
 * Return: print number 0 - 9 followed by a new line.
 */

void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar ('\n');

}
