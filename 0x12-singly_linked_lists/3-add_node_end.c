#include "lists.h"
/**
 * add_node_end - add a new node at the end of a list_t list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be added
 * Return: Address of the new element or NULL -code failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *old_node = *head;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	new_node->len = strlen(str);

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (old_node->next != NULL)
			old_node = old_node->next;

		old_node->next = new_node;
	}
	return (new_node);
}
