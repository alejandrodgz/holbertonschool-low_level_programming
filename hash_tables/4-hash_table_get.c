#include "hash_tables.h"

/**
 * hash_table_get - get info
 * @ht: table
 * @key: key to find node
 * Return: value of node
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *string;

	if (ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	string = ht->array[index];
	if (string == NULL)
	return (NULL);
	while (string->next != NULL)
		string = string->next;
	return (string->value);
}
