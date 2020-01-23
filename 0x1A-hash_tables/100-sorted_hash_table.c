#include "hash_tables.h"
/**
 * hash_table_create - Create hash table
 * @size: size of the array
 *
 * Description: Create hash table
 * Return: The pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_hashT;

	new_hashT = malloc(sizeof(shash_table_t));
	if (new_hashT == NULL)
		return (NULL);

	new_hashT->size = size;
	new_hashT->array = calloc(size, sizeof(hash_node_t *));
	if (new_hashT->array == NULL)
	{
		free(new_hashT);
		return (NULL);
	}
    new_hashT->shead = NULL;
    new_hashT->stail = NULL;
	return (new_hashT);
}
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to set
 * @key: key
 * @value: value for key
 *
 * Return: 1 if it succeeded, 0 otherwise
*/ 
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *tmp;
	char *copy_value, *copy_key;

	if (!key || key == NULL || !ht || !ht->array)
		return (0);

	copy_value = strdup(value);
	copy_key = strdup(key);
    
    ht->shead = ht->array[0];
    tmp = ht->shead;
    
    new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
    new_node->key = copy_key;
    new_node->value = copy_value;

    ht->array[0] = new_node;
    return(1);
}