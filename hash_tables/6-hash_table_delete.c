#include "hash_tables.h"

/**
 *hash_table_delete - function that deletes a hash table
 *@ht: hash table
 *
 *Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = node->next;

			while (node != NULL)
			{
				tmp = node->next;
				free(node->value);
				free(node->key);
				free(node);
				node = tmp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
