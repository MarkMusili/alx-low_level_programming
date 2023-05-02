#include "lists.h"
/**
 * get_nodeint_at_index - return thr nth node of a linked list
 * @head: pointer or the head of the list
 * @index: index of the node
 * Return: pointer to the nth node, or NULL is it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int l = 0;
	listint_t *current;

	current = head;
	while (current != NULL && l < index)
	{
		current = current->next;
		l++;
	}
	if (l == index && current != NULL)
		return (current);

	return (NULL);
}
