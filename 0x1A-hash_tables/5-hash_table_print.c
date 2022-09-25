#include "hash_tables.h"

/**
 * hash_table_print- getss element from a hash table
 * @ht: table to print
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node != NULL)
		{
			printf("\'%s\' : \'%s\'", node->key, node->value);
		}
		else
		{
			if (ht->array[i + 1] != NULL)
				printf(", ");
			continue;
		}
		while (node->next != NULL)
		{
			printf(", \'%s\' : \'%s\'", node->next->key, node->next->value);
			node = node->next;

		}
	}
	printf("}\n");

}
