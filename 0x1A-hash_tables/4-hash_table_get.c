#include "hash_tables.h"
/**
 * hash_table_get - retrieves a key/value
 * @ht: hash table to set
 * @key: key
 *
 * Return: a value associated with a key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *key_value = NULL;
	unsigned long int index_table;
	hash_node_t *tmp = NULL;

	if (!key || key == NULL || !ht)
		return (NULL);
	index_table = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index_table];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			key_value = strdup(tmp->value);
		tmp = tmp->next;
	}
	return (key_value);
}
