#include "variadic_functions.h"

/**
 *print_all - function that all
 *@format: list of types of arguments
 *Return: void
 */

void print_all(const char * const format, ...)
{
	va_list d;
	int g;
	int a;
	char *z = "";

	op_t all[] = {{"c", print_char},
		      {"i", print_int},
		      {"f", print_float},
		      {"s", print_pchar},
		      {NULL, NULL}};


	va_start(d, format);

	g = 0;
	while (format && format[g])
	{
		a = 0;
		while (all[a].op)
		{
			if (all[a].op[0] == format[g])
			{
				printf("%s", z);
				all[a].f(d);
				z = ", ";
			}
			a++;
		}
		g++;
	}
	printf("\n");
	va_end(d);
}

/**
 *print_char - print char
 *@s:character
 *Return: void
 */

void print_char(va_list s)
{
	printf("%c", va_arg(s, int));
}


/**
 *print_int - print int
 *@j:integer
 *Return: void
 */

void print_int(va_list j)
{
	printf("%d", va_arg(j, int));
}

/**
 *print_float - print float
 *@h:float
 *Return: void
 */

void print_float(va_list h)
{
	printf("%f", va_arg(h, double));
}

/**
 *print_pchar - print ponters char
 *@c: * char pointer
 *Return: void
 */

void print_pchar(va_list c)
{
	char *v;

	v = va_arg(c, char *);

	if (v  == NULL)
		v = "(nil)";
	printf("%s", v);
}
