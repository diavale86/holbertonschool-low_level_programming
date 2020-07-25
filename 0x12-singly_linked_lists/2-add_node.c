#include "lists.h"

/**
 *add_node - function that adds a new node
 *@str: element str of linked lists
 *@head: head of linked lists
 *Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
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
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
