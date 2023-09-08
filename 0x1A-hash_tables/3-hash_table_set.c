#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - Adds an element to the hash table
 * @ht: hash table i want to interact with
 * @key: key
 * @value: value associated with the key
 * Return: 1 on success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/*Initialize the variables*/
	hash_node_t *new_node;
	unsigned long int index;

	/*Check for invalid value*/
	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	/*Generate the index*/
	index = key_index((const unsigned char *)key, ht->size);

	/*Create a node for the key-value pair*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	/*Duplicate the key*/
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		new_node = NULL;
		return (0);
	}

	/*Duplicate the value*/
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		new_node = NULL;
		return (0);
	}

	/*Handle the collisions*/
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
