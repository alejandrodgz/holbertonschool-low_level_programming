#include "hash_tables.h"

/**
 * 
 * 
 * 
 * 
 * 
 */

hash_node_t *ht_pair(const char *key, const char *value)
{
    hash_node_t *entry;

    entry = malloc(sizeof(entry) * 1);
    if (entry == NULL)
            return (0);
    entry->key = malloc(strlen(key) + 1);
    if (entry->key == NULL)
            return (0);
    entry->value = malloc(strlen(value) + 1);
    if (entry->value == NULL)
            return (0);
    strcpy(entry->key, key);
    strcpy(entry->value, value);
    entry->next = NULL;
    return(entry);
}

 int hash_table_set(hash_table_t *ht, const char *key, const char *value)
 {
    unsigned long int slot = key_index((const unsigned char *)key, ht->size);
    hash_node_t *entry = ht->array[slot];
     hash_node_t *prev;

    if (entry == NULL)
    {
        ht->array[slot] = ht_pair(key, value);
        return(1);
    }
    while (entry != NULL)
    {
        if (strcmp(entry->key, key) == 0)
        {
            free(entry->value);
            entry->value = malloc(strlen(value) + 1);
            if (entry->value == NULL)
                    return (0);
            strcpy(entry->value, value);
            return (1);
        }
        entry = entry->next;
    }
    prev = ht_pair(key, value);
    prev->next = ht->array[slot];
    ht->array[slot] = prev;
    return (1);
 }