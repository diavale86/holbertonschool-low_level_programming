#include "variadic_functions.h"

/**
 *sum_them_all - function that returns the sum of all its parameters
 *@n: number parameters
 *Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list s;
	unsigned int j;
	int h;

	if (n == 0)
		return (0);

	va_start(s, n);

	for (j = 0; j < n; j++)
	{
		h += va_arg(s, int);
	}

	va_end(s);

	return (h);
}
