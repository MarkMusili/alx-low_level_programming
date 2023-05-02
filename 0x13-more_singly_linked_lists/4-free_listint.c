#include "lists.h"
/**
 * free_listint - free listint_t list
 * @head: pointer to the head of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *c_node, *n_node;

	c_node = head;
	while (c_node != NULL)
	{
		n_node = c_node->next;
		free(c_node);
		c_node = n_node;
	}
}
