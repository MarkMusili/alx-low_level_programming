#include "lists.h"
/**
 * sum_listint - adds the data in each node of the list
 * @head: pointer to the first element of the list
 * Return: sum of the data
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
