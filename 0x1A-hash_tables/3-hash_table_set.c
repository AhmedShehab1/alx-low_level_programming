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
	char *new_value = NULL;
	hash_node_t *current_node = NULL, *new_node = NULL;

	if (ht == NULL)
		return (Failure);
	index = key_index((const unsigned char *)key, ht->size);
	current_node =  ht->array[index];
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			new_value = strdup(value);
			if (!new_value)
				return (0);
			free(current_node->value);
			current_node->value = new_value;
			return (1);
		}
		current_node = current_node->next;
	}
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (Failure);
		new_node->key = malloc(strlen(key) + 1);
		if (new_node->key == NULL)
		{
			free(new_node);
			return (Failure); }
		new_node->value = malloc(strlen(value) + 1);
		if (new_node->value == NULL)
		{
			free(new_node->key);
			free(new_node);
			return (Failure); }
		strcpy(new_node->key, key);
		strcpy(new_node->value, value);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	return (Success);
}
