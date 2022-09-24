#include "hash_tables.h"

/**
 * key_index - function to generte index based on "size"
 * @key: string member to use with hash fucntion
 * @size: size of hash_table
 * Return: returns Index
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int i;

	hash = hash_djb2(key);
	i = hash % size;

	return (i);
}
