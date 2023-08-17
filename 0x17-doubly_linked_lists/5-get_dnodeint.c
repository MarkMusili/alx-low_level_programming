#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node at given index
 * @head: pointer to the head of the list
 * @index: desired index
 * Return: nth node of the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/*Declare the variables*/
	dlistint_t *current;
	unsigned int idx = 0;

	/*Parse through the list*/
	current = head;
	while (current->next != NULL)
	{
		if (idx == index)
			return (current);
		current = current->next;
		idx++;
	}

	return (NULL);
}
