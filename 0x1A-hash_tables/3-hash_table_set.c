#include "hash_tables.h"

/**
 * hash_table_set- adds element to a hash table
 * @ht: table to use
 * @key: key to add
 * @value: value to add
 * Return: 1 for success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *prev;
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t *));
	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	prev = ht->array[idx];
	if (prev != NULL)
		new->next = prev;
	else
		new->next = NULL;
	new->key  = strdup(key);
	new->value = strdup(value);
	ht->array[idx] = new;

	return (1);
}
