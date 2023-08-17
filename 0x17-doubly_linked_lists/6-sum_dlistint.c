#include "lists.h"
/**
 * sum_dlistint - sum up the data in a list
 * @head: pointer to head of the list
 * Return: sum of the data in each element
 */

int sum_dlistint(dlistint_t *head)
{
	/*Declare variables*/
	int sum = 0;
	dlistint_t *current;

	/*Check for the condition*/
	if (head == NULL)
		return (0);

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
