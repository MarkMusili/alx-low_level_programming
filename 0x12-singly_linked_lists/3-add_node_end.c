#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds a node at the end of a list
 * @head: pointer to the first element of a list
 * @str: holds copy of a string
 * Return: the address of the new pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *End_node;
	list_t *temp;

	if (str == NULL)
		return (NULL);

	End_node = malloc(sizeof(list_t));
	if (End_node == NULL)
		return (NULL);

	End_node->str = strdup(str);
	if (End_node->str == NULL)
	{
		free(End_node);
		return (NULL);
	}

	End_node->len = strlen(str);
	End_node->next = NULL;

	if (*head == NULL)
		*head = End_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = End_node;
	}
	return (End_node);
}
