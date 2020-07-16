#include "function_pointers.h"

/**
 *int_index - function that searches for an integer.
 *@array: array
 *@size: size array
 *@cmp: pointer to function
 *Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int s;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (s = 0; s < size; s++)
		{
			if (cmp(array[s]))
				return (s);
		}

	}
	return (-1);
}
