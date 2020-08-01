#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 *@head: fist elemen list
 *Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (*head == NULL)
		return (0);

	current = *head;
	*head = current->next;
	n = current->n;
	free(current);

	return (n);
}
