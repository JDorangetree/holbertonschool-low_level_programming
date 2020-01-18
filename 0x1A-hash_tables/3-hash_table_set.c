#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to set
 * @key: key
 * @value: value for key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index_table;
	hash_node_t *tmp, *new_node;
	char *copy_value, *copy_key;

	if (!key || key == NULL || !ht || !ht->array)
		return (0);

	copy_value = strdup(value);

	index_table = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index_table];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			tmp->value = copy_value;
			return (1);
		}
		tmp = tmp->next;
	}
	tmp = ht->array[index_table];
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->value = copy_value;
	new_node->key = key;
	new_node->next = tmp;
	ht->array[index_table] = new_node;
	return (1);
}
