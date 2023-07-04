#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Deletes the head node of a list
 * @head: pointer to the pointer of the first node
 * Return: node's data or 0 if it is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
