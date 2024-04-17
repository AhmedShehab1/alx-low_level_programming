#include "hash_tables.h"
/**
 * hash_table_create - Function that creates a hash table.
 * @size: Size Of The Array
 *
 * Return: Pointer To Newly Created Hash Table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));
	int i = 0;

	ht->size = size;
	ht->array = calloc(ht->size, sizeof(hash_node_t *));
	for (; i < size; i++)
	ht->array[i] = NULL;
	return (ht);
}
