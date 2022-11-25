#include "hash_tables.h"

/**
 *hash_table_set -  function that adds an element to the hash table
 *@ht: is the hash table you want to add or update the key/value to
 *@key: kay
 *@value: the value associated with the key
 *
 *Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *val_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL)
		return (0);

	val_copy = strdup(value);
	index = key_index((const unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array->value);
			ht->array[i]->value = val_copy;

			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = val_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
