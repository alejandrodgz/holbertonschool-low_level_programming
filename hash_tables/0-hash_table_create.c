#include "hash_tables.h"

/**
 * hash_table_create - creation of hash table
 *   
 * @size: size of the table
 * Return: hash table
 * 
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table1;
	if (size == 0)
		return (NULL);
	table1 = malloc(sizeof(hash_table_t));
	if (!table1)
		return (NULL);
	table1->size = size;
	table1->array = calloc((size_t)table1->size, sizeof(hash_node_t *));
	if (table1->array == NULL)
		return (NULL);
	return (table1);
}