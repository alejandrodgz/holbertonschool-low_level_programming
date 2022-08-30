#include "hash_tables.h"

/**
 * 
 * 
 * 
 * 
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int index;

    if (size == 0)
            return (0);
    index = hash_djb2(key);
    return (index % size);
}