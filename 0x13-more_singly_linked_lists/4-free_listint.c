#include "lists.h"

/**
 *free_listint - function that free
 *@head: fist elemen node
 *Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *nodo;

	nodo = head;

	while (nodo != NULL)
	{
		head = nodo->next;
		free(nodo);
		nodo = head;
		
	}
}
