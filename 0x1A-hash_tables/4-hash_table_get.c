#include "hash_tables.h"

/**
 * hash_table_get- getss element from a hash table
 * @ht: table to use
 * @key: key to add
 * Return: value string
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;


	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
