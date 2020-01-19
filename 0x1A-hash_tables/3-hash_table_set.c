#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht : hash table
 * @key : pointer
 * @value : pointer
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	hash_node_t *tempo;
	unsigned long int idx;

	idx = 0;
	if (ht == NULL || key == NULL)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);
	if (!value)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	tempo = ht->array[idx];
	for (; tempo != NULL; tempo = tempo->next)
	{
		if (strcmp(tempo->key, key) == 0)
		{
			tempo->value = strdup(value);
			free(node);
			free(tempo->value);
			return (1);
		}

	}

	node->value = strdup(value);
	node->key  = strdup(key);
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);

}
