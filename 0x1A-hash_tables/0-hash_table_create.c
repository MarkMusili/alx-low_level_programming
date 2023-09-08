#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - Creates a hash table DS
 * @size: size of the array
 * Return: Pointer to the newly created hash table
 * otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/*Initialize variables*/
	hash_table_t *hash_table;
	unsigned long int i;

	/*Allocate memmory for the hash table structure*/
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	/*Allocate memmory for the array itself*/
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	hash_table->size = size;

	/*Set the slots to be NULL*/
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;

	return (hash_table);
}
