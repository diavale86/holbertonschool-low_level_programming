#include "variadic_functions.h"

/**
 *print_numbers - function that prints numbers, followed by a new line.
 *@n: number parameters
 *@separator: ,
 *Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list s;
	unsigned int j;


	va_start(s, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(s, int));
		if (separator && j < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(s);
}
