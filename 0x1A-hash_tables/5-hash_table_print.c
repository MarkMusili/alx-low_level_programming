#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - Print a hash table
 * @ht: the hash table to be printed
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	/*Define the variables*/
	unsigned long int i;
	int printed = 0;
	hash_node_t *current;

	/*Check for error*/
	if (ht == NULL)
		return;

	/*Loop over the nodes*/
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (printed)
				printf(", ");

			printf("'%s': '%s'", current->key, current->value);
			current = current->next;

			printed = 1;
		}
	}
	printf("}\n");
}
