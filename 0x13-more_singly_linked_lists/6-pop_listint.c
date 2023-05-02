#include "lists.h"
/**
 * pop_listint - deletes the head of a listint_t
 * @head: pointer to a pointer to the head of the list
 * Return: head node's data (n) or 0 if te list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *b;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	b = *head;
	n = b->n;
	*head = b->next;
	free(b);

	return (n);
}
