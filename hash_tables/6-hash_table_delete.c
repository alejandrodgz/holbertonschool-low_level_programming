#include "hash_tables.h"

/**
 * hash_table_print - free
 * @ht: list
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node1, *node2;
	unsigned long i;

	if (ht == NULL || ht->array == NULL)
		return;
	for (i = 0; i <= ht->size; i++)
	{
		node1 = ht->array[i];
		while (node1)
		{
			if (node1 == NULL)
				continue;
			node2 = node1;
			node1 = node1->next;
			free(node2->value);
			free(node2->key);
			free(node2);
		}
		free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
