#include "function_pointers.h"

/**
 * print_name - prints name
 *@name: name
 *@f: poniters funtions
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
