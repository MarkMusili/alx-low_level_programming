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
	unsigned int idx;

	/*Parse through the list*/
	if (head == NULL)
		return (NULL);

	current = head;
	if (index > 0)
	{
		idx = 0;
		while (current->next != NULL)
		{
			if (idx == index)
				return (current);
			current = current->next;
			idx++;
		}
	}
	else
	{
		while (current != NULL && current->next != NULL)
			current = current->next;
		idx = -1;
		while (current != NULL)
		{
			if (idx == index)
				return (current);
			current = current->prev;
			idx--;
		}
	}

	return (NULL);
}
