#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a list
 * @head: pointer to the first element
 * @n: data to be in the element
 * Return: pointer to the new element or else NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/*Declare the variables*/
	dlistint_t *new_node;

	/*Assing memmory to new node*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	/*Assign the data*/
	new_node->n = n;

	/*Link the nodes*/
	new_node->prev = NULL;

	if ((*head) != NULL)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	else
		new_node->next = NULL;
	/*Update the head of the list*/
	*head = new_node;

	/*Return the address to new head*/
	return (new_node);
}
