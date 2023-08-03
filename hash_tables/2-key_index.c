#include "hash_tables.h"
/**
 *key_index - function that gives you the index of a key.
 *@key: the key to get the table
 *@size: the size of hash table
 *Return:  the index at which the key/value pair should be stored in
 *the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2((unsigned char *)key);
	return (index % size);
}
