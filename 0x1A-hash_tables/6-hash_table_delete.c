#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *ptr_head = ht;
	hash_node_t *ptr1, *tmp;
	unsigned long int x;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			ptr1 = ht->array[x];
			while (ptr1 != NULL)
			{
				tmp = ptr1->next;
				free(ptr1->key);
				free(ptr1->value);
				free(ptr1);
				ptr1 = tmp;
			}
		}
	}
	free(ptr_head->array);
	free(ptr_head);
}
