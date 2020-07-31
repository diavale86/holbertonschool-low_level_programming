#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: unsigned long int.
 *
 * Return: nothing.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask, count, mirror = n;

	mask = 1;
	count = 0;
	if (!n)
	{
		_putchar('0');
		return;
	}
	while (mirror)
	{
		mirror = mirror >> 1;
		count++;
	}
	mask = mask << (count - 1);
	while (mask)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		mask = mask >> 1;
	}
}
