#include "lists.h"

/**
 *free_list - function that frees a list_t list
 *@head: head of linked lists
 *Return: void
 */

void free_list(list_t *head)
{
	list_t *current;

	current = head;
	while (current != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
		current = head;
	}
}
