#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: pointer to the head of the list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	/*Declare the variables*/
	dlistint_t *current, *next;

	current = head;
	/*Free the list*/
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
