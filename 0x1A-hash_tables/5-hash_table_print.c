#include "hash_tables.h"
/**
 * hash_table_print - prints all elements of a hash table
 * @ht: hash table to set
 *
 * Return: --
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index_table = 0, number_of_elements = 0;
	hash_node_t *tmp;

	if (!ht)
		return;
	else
	{
		printf("{");
		while (index_table < ht->size)
		{
			tmp = ht->array[index_table];
			while (tmp)
			{
				if (number_of_elements != 0)
				printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				number_of_elements++;
			}
			index_table++;
		}
		printf("}\n");
	}
}
