#include "holberton.h"

/**
 * print_most_numbers - print number but Do not print 2 and 4
 * Return: print number 0 - 9 followed by a new line.
 */

void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == '2' || num == '4')
		{
		}
		else
		{
			_putchar(num);
		}
	}
	_putchar ('\n');

}
