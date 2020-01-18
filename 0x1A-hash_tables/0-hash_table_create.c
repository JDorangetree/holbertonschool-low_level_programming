#include "hash_tables.h"
/**
 * hash_table_create - Create hash table
 * @size: size of the array
 *
 * Description: Create hash table
 * Return: The pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hashT;

	new_hashT = malloc(sizeof(hash_table_t));
	if (new_hashT == NULL)
		return (NULL);

	new_hashT->size = size;
	new_hashT->array = calloc(size, sizeof(hash_node_t *));
	if (new_hashT->array == NULL)
	{
		free(new_hashT);
		return (NULL);
	}
	return (new_hashT);
}
