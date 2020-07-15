#include "function_pointers.h"

/**
 * array_iterator - prints elemens
 *@array: array
 *@size: size array
 *@action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t s;

	if (array && action)

		for (s = 0; s < size; s++)

			action(array[s]);

}
