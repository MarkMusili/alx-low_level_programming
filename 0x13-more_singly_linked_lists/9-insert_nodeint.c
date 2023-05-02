#include "lists.h"
/**
 * sum_listint - computes the sum of the data n
 * @head: pointer to the head of the list
 * Return: the sum of the data or  0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
