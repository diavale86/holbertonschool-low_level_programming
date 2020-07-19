#include "variadic_functions.h"

/**
 *print_strings - unction that prints strings,
 *@n: string parameters
 *@separator: ,
 *Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	unsigned int j;
	char *h;


	va_start(s, n);

	for (j = 0; j < n; j++)
	{
		h = va_arg(s, char *);
		if (h  == NULL)
			printf("(nil)");
		else
			printf("%s", h);
		if (separator && j < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(s);
}
