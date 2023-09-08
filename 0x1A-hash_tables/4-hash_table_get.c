#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - retrives the value of associated key
 * @ht: hash table to be searched
 * @key: the key we are looking for
 * Return: associated value with the element
 * otherwise NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	/*Initialize the variables*/
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/*Get the key index*/
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	/*Loop over the nodes in the index*/
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			/*Return value*/
			return (current->value);
	}

	/*Return NULL*/
	return (NULL);

}
