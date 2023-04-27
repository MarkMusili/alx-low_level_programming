#include "lists.h"
/**
 * free_list -  Frees the list list_t
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *c_node;

	while (head != NULL)
	{
		c_node = head;
		head = head->next;
		free(c_node->str);
		free(c_node);
	}
}
