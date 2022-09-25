#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table of size "size"
 * @size: member
 * Return: returns address of a hash_table
 */


shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *s_table;
	unsigned long int i;

	s_table = malloc(sizeof(shash_table_t));
	if (s_table == NULL)
		return (NULL);
	s_table->size = size;
	s_table->shead = NULL;
	s_table->stail = NULL;
	s_table->array = malloc(size * sizeof(shash_node_t *));
	if (s_table->array == NULL)
	{
		free(s_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		s_table->array[i] = NULL;
	return (s_table);
}

/**
 * add_node_to_sortedlist - add a node to the sorted linked list
 * @table: the sorted hash table
 * @node: the node to add
 * Return: void
 */
void add_node_to_sortedlist(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *tmp;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}
	tmp = table->shead;
	while (tmp != NULL)
	{
		if (strcmp(node->key, tmp->key) < 0)
		{
			node->snext = tmp;
			node->sprev = tmp->sprev;
			tmp->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				table->shead = node;
			return;
		}
		tmp = tmp->snext;
	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}

/**
 * shash_table_set- adds element to a hash table
 * @ht: table to use
 * @key: key to add
 * @value: value to add
 * Return: 1 for success
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *tmp;
	shash_node_t *new;
	char *new_value;

	new = malloc(sizeof(shash_node_t));
	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}
	new->key  = strdup(key);
	new->next = ht->array[idx];
	new->value = strdup(value);
	new->snext = NULL;
	new->sprev = NULL;
	ht->array[idx] = new;
	add_node_to_sortedlist(ht, new);

	return (1);
}


/**
 * shash_table_get- getss element from a hash table
 * @ht: table to use
 * @key: key to add
 * Return: value string
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *node;


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
/**
 * shash_table_print- getss element from a hash table
 * @ht: table to print
 * Return: Nothing
 */

void shash_table_print(const shash_table_t *ht)
{
	unsigned long int j = 0;
	shash_node_t *node;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	printf("{");
	node = ht->shead;
	while (node != NULL)
	{
		if (j > 0)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		j++;
	}
	printf("}\n");

}

/**
 * shash_table_print_rev- getss element from a hash table
 * @ht: table to print
 * Return: Nothing
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int j = 0;
	shash_node_t *node;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	printf("{");
	node = ht->stail;
	while (node != NULL)
	{
		if (j > 0)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		j++;
	}
	printf("}\n");

}

/**
 * shash_table_delete- getss element from a hash table
 * @ht: table to delete
 * Return: Nothing
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			node = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = node;
		}
	}
	free(ht->array);
	free(ht);
}
