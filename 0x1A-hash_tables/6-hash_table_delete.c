#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	/*Initialize the variables*/
	unsigned long int i;
	hash_node_t *current, *temp;

	/*Check for error*/
	if (ht == NULL)
		return;

	/*Loop and free*/
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current;
			current = current->next;

			free(temp->key);
			free(temp->value);

			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
