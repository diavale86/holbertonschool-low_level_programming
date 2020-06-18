#include "holberton.h"

/**
 * times_table - Entry point
 *
 * Return: function that prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int n;
	int u;
	int r;

	for (n = 0; n <= 9; n++)
	{
		for (u = 0; u <= 9; u++)
		{
			r = n * u;

			if (r < 10)
			{
				if (u > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(r + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
