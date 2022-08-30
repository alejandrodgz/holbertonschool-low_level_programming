#include "hash_tables.h"

/**
 *
 * 
 * 
 * 
 * 
 */

void hash_table_print(const hash_table_t *ht)
{
    long unsigned int i;
    hash_node_t *string;
    char *comma = "";
    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        string = ht->array[i];
        if (string == NULL)
                continue;
        printf("%s\'%s\': \'%s\'", comma, string->key, string->value);
        comma = ", ";
    }
    printf("}\n");
}