#include "hash_tables.h"
/**
 * key_index - Generate the index where the key will be stored
 * @key: is the key
 * @size: size of the array of the hash table
 * Return: index where the key shoudl be strored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/*Initialize the variables*/
	unsigned long int index;
	unsigned long int code;

	/*Call the code generator function*/
	code = hash_djb2(key);

	/*Perform a modulo operation to get the index*/
	index = code % size;

	/*Return the index*/
	return (index);
}
