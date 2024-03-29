#include "hash_tables.h"

/**
 * hash_table_print- getss element from a hash table
 * @ht: table to print
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j = 0;
	hash_node_t *node;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			j++;
			if (node != NULL)
				printf(", ");
		}
		if (j > 0 && ht->array[i + 1] != NULL)
			printf(", ");
	}
	printf("}\n");

}
