#include "holberton.h"

/**
 * more_numbers - print number
 * print number 0 - 14 followed by a new line.
 */

void more_numbers(void)
{
	int i;
	int m;

	for (m = 0; m <= 9; m++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)

				_putchar (i / 10 + '0');
			_putchar (i % 10 + '0');

		}
		_putchar ('\n');
	}

}
