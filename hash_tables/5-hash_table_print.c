#include "hash_tables.h"

/**
 * hash_table_print - print table
 * @ht: table
 * 
 * 
 */

void hash_table_print(const hash_table_t *ht)
{
	long unsigned int i;
	hash_node_t *string;
	char *comma = "";

	if (!ht || !ht->array)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		string = ht->array[i];
		while (string)
		{
			if (string == NULL)
				continue;
			printf("%s\'%s\': \'%s\'", comma, string->key, string->value);
			comma = ", ";
			string = string->next;
		}
	}
	printf("}\n");
}
