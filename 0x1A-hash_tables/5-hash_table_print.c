#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 * Description: Key/value pairs are printed in the order
 * they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr_node;
	unsigned long int j;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			ptr_node = ht->array[j];
			while (ptr_node != NULL)
			{
			printf("'%s': '%s'", ptr_node->key, ptr_node->value);
			ptr_node = ptr_node->next;
			if (ptr_node != NULL)
				printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
