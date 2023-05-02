#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list
 * @h: pointer to a pointer to the head node of the list
 *
 * Return: The size of the list that was freed
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current, *temp;
	size_t size = 0;

	while (*h != NULL)
	{
		if ((*h)->next >= *h)
		{
			*h = NULL;
			return (size);
		}

		(*h)->next = *h;

		current = *h;
		*h = (*h)->next;
		size++;

		free(current);
	}
	*h = NULL;

	return (size);
}
