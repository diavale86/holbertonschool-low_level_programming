#include "holberton.h"

/**
 * print_last_digit - Entry point
 * @v: char to check
 * Return: last digit of a number
 */
int print_last_digit(int v)
{
	int n;

	n = v % 10;

	if (n < 0)
	{
		n = n * -1;
	}
	_putchar (n + '0');
	return (n);
}
