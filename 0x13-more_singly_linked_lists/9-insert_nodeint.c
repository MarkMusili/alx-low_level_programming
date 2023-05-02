#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: pointer to a pointer to the head of list
 * @idx: index of the list where the noew node is to be added
 * @n: int data to for the node
 *
 * Return: address of the new node, or NULL for code failiure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_node, *temp;
	unsigned int l;

	if (head == NULL)
		return (NULL);

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	temp = *head;
	for (l = 0; l < idx - 1 && temp != NULL; l++)
		temp = temp->next;

	if (temp == NULL)
	{
		free(n_node);
		return (NULL);
	}
	n_node->next = temp->next;
	temp->next = n_node;
	return (n_node);
}
