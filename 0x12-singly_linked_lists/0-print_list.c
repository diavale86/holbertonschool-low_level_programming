#include "lists.h"

/**
 *print_list - prints all the elements of a list_t list
 *@h: elements of structure
 *Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

		while (h)
		{
			if (!h->str)
				printf("[0] (nil)\n");
			else
			{
				printf("[%d] ", h->len);
				printf("%s\n", h->str);
			}
			h = h->next;
			counter++;
		}
	return (counter);
}
