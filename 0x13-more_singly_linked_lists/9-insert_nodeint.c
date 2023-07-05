#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a node at a desired index
 * @head: pointer to a pointer to the head node
 * @idx: index of the list where the new node should be added
 * @n: data to be added in the new node
 * Return: address og the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index = 0;
	listint_t *new_node;
	listint_t *current;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	current = *head;
	while (current != NULL && index < idx - 1)
	{
		current = current->next;
		index++;
	}
	if (current == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
