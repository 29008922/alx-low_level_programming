#include "hash_tables.h"

/**
 * key_index - Get index at key/value
 *      pair stored in array of a hash table.
 * @key:key to get index of.
 * @size: size of the array of the hash table.
 *
 * Return:index of the key.
 * Description: djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);/*The index of the key*/
}
