#include "lists.h"

/**
 *free_listint2 - function that free
 *@head: fist elemen node
 *Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *nodo;

	if (head != NULL)
	{
		if (*head != NULL)
		{
			nodo = *head;
			while (nodo != NULL)
			{
				*head = nodo->next;
				free(nodo);
				nodo = *head;
			}
		}
		head = NULL;
	}
}
