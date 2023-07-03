#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - Frees a lsist from its memmory
 * @head - pointer to the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
