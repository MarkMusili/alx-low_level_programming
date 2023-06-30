#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - Adds a node at the beginning of a list
 * @head: pointer to the first node
 * @str: holds copy of the a string
 * Return: address of the new element of NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *Newnode;

	if (str == NULL)
		return (NULL);

	Newnode = malloc(sizeof(list_t));
	if (Newnode == NULL)
		return (NULL);

	Newnode->str = strdup(str);
	if (Newnode->str == NULL)
	{
		free(Newnode);
		return (NULL);
	}

	Newnode->len = strlen(str);
	Newnode->next = *head;

	*head = Newnode;

	return (Newnode);
}
