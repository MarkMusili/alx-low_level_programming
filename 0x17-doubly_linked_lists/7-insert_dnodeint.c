#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert node at given index
 * @h: pointer to a pointer to the head node of the list
 * @idx: desired index
 * @n: data for the new node
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	unsigned int index = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		if (*h != NULL)
		{
			(*h)->prev = new_node;
			new_node->next = *h;
		}
		*h = new_node;
		return (new_node);
	}

	current = *h;
	while (current)
	{
		if (index == idx)
		{
			new_node->next = current;
			new_node->prev = current->prev;
			current->prev = new_node;
			return (new_node);
		}
		current = current->next;
		index++;
	}

	return (NULL);

}
