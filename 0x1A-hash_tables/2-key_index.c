#include "hash_tables.h"
/**
 * key_index - gives you the index
 * @size: size of the array
 * @key: key
 *
 * Return: the index at which the key/value pair
 * should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	if (size == 0 || key == NULL)
		index = 0;
	else
	{
		hash = hash_djb2(key);
		index = hash % size;
	}
	return (index);
}
