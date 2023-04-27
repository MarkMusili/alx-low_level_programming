#include "lists.h"
/**
 * list_len - prints the number of elements in a linked list
 * @h: Pointer to the head node of the list to be used
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t num_e = 0;

	while (h != NULL)
	{
		num_e++;
		h = h->next;
	}

	return (num_e);
}
