#include "lists.h"
/**
 * delete_nodeint_at_index -  delete a node at an index
 * @head: pointer to a pointer to the head of the list
 * @index: index of the node to be deleted
 * Return: 1 if successful or -1 failiure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *last;
	unsigned int l;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (l = 0 ; l < index && current != NULL; l++)
	{
		last = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	last->next = current->next;
	free(current);

	return (1);
}
