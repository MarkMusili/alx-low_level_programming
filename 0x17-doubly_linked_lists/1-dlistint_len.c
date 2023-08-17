#include "lists.h"
/**
 * dlistint_len - Return number of elements in a list
 * @h: pointer to the head node of the list
 * Return: Number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	/*Declare the variables*/
	size_t count = 0;
	const dlistint_t *current;

	/*assign current to the list*/
	current = h;
	/*Loop over the nodes while keeping their count*/
	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	/*Return the count*/
	return (count);
}
