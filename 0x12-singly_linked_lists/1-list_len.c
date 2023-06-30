#include "lists.h"
#include <stddef.h>
/**
 * list_len - Prints the number of elements in the list
 * @h: current node
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
