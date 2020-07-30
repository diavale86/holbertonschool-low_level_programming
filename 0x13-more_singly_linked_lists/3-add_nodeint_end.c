#include "lists.h"

/**
 *add_nodeint_end - function that adds a new node at end
 *@head: fist elemen node
 *@n: elemen the estructur
 *Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *current;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!head || !(*head))
	{
		*head = node;
	}
	else
	{
		current = *head;
		for (; current->next; current = current->next)
			;
		current->next = node;
	}
	return (node);
}
