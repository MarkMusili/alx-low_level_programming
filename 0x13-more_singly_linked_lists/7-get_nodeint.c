#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node of a list.
 * @head: pointer to the first element
 * @index: index to be returned
 * Return: nth index of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i = 0;

	current = head;
	while (current->next != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
