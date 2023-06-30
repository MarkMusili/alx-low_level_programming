#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - Prints the elements of a list
 * @h: current node
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		i++;
	}
	return (i);
}
