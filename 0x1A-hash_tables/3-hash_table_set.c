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
	hash_node_t *tmp;
	hash_node_t *new;
	char *nu_value;

	new = malloc(sizeof(hash_node_t *));
	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			nu_value = strdup(value);
			free(tmp->value);
			tmp->value = nu_value;
			return (1);
		}
		tmp = tmp->next;
	}
	new->next = ht->array[idx];
	new->key  = strdup(key);
	new->value = strdup(value);
	ht->array[idx] = new;

	return (1);
}
