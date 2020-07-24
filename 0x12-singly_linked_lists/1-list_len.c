#include "lists.h"

/**
 *list_len - prints all the elements of a list_t list
 *@h: elements of structure
 *Return: number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
