#include "hash_tables.h"
/**
 *hash_table_create - function that creates a hash table.
 *@size: Size of the new hash table
 *Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int x = 0;
	hash_table_t *new_hash_table = NULL;

	new_hash_table = malloc(sizeof(hash_table_t));
	if (!new_hash_table)
		return (NULL);

	new_hash_table->size = size;

	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_hash_table->array)
	{
		free(new_hash_table);
		return (NULL);
	}

	for (; x < size; x++)
		(new_hash_table->array)[x] = NULL;
	return (new_hash_table);
}
