#include "lists.h"

/**
 *add_nodeint - function that adds a new node
 *@head: fist elemen node
 *@n: elemen the estructur
 *Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
