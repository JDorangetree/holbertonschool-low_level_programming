#include "hash_tables.h"
/**
 * hash_table_delete - delete all elements of a hash table
 * @ht: hash table to set
 *
 * Return: --
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index_table = 0;
	hash_node_t *tmp, *tmp_2;

	if (!ht)
		return;
	while (index_table < ht->size)
	{
		tmp = ht->array[index_table];
		while (tmp)
		{
			tmp_2 = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = tmp_2;
		}
		index_table++;
	}
	free(ht->array);
	free(ht);
}
