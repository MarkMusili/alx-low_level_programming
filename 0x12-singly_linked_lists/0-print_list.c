#include "lists.h"
/**
 * print_list - prints all the elements of a list
 * @h: pointer to the head node list to be printed
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num_n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num_n++;
	}
	return (num_n);
}
