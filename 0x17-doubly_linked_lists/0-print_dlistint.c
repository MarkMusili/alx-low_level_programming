#include "lists.h"
/**
 * print_dlistint - Print the contents in a list
 * @h: pointer to the the head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	/*Declare the variables*/
	const dlistint_t *current;
	size_t count = 0;

	/*Point to the list*/
	current = h;

	/*Parse through the nodes while while keeping the count of the nodes parsed*/
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	/*Return the count*/
	return (count);
}
