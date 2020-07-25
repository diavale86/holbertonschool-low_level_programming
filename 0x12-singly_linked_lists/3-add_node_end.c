#include "lists.h"

/**
 *add_node_end - function that adds a new node at the end
 *@str: element str of linked lists
 *@head: head of linked lists
 *Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *current;
	unsigned int counter;
	char *s;

	if (!str)
		return (NULL);

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	s = strdup(str);
	if (s == NULL)
	{
		free(newnode);
		return (NULL);
	}
	for (counter = 0; s[counter] != '\0'; counter++)
		;

	newnode->str = s;
	newnode->len = counter;
	newnode->next = NULL;

	if (!head || !(*head))
	{
		*head = newnode;
	}
	else
	{
		current = *head;
		for (; current->next; current = current->next)
			;
		current->next = newnode;
	}

	return (newnode);
}
