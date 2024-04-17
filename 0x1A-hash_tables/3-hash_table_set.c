#include "hash_tables.h"
/**
 * hash_table_set - Function To Add An Element To Hash Table
 * @ht: Hash Table
 * @key: Key is The Key, Cannot Be Empty
 * @value: Value Associated With The Key
 *
 * Return: 1 If Succeeded Else 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	hash_node_t *head = NULL, *new = NULL;

	if (ht == NULL)
	return (Failure);

	index = key_index((const unsigned char *)key, ht->size);
	head =  ht->array[index];
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	return (Failure);
	new->key = malloc(sizeof(strlen(key) + 1));
	if (new->key == NULL)
	return (Failure);
	new->value = malloc(sizeof(strlen(value) + 1));
	if (new->value == NULL)
	return (Failure);
	strcpy(new->key, key);
	strcpy(new->value, value);
	new->next = head;
	head = new;
	ht->array[index] = head;

	return (Success);
}
