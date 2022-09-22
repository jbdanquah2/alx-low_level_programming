#include "hash_tables.h"

/**
* hash_table_create - create a hash table
* @size:  size of the table
*
* Return: pointer to the newly created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_tble;
    unsigned long int i;

    new_tble = malloc(sizeof(hash_table_t));
    if (new_tble == NULL)
    {
        return (NULL);
    }

    new_tble->size = size;
    new_tble->array = malloc(sizeof(hash_node_t *) * size);

    if (new_tble->array)
    {
        return (NULL);
    }

    for (i = 0; i < size; i++)
    {
        new_tble->array[i] = NULL;
    }


    return (new_tble);
}
