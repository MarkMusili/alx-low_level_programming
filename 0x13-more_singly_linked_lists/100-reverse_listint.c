#include "lists.h"
/**
 * reverse_listint - Reverse a listint_t linked list
 * @head: pointer to the head of the list
 * Return: Pointer to tha first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first, *body;

	if (*head == NULL)
		return (NULL);

	first = *head;
	body = first->next;

	if (body == NULL)
		return (first);

	reverse_listint(&body);

	first->next->next = first;
	first->next = NULL;

	*head = body;

	return (*head);
}
