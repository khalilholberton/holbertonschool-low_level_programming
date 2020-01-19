#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @key : the key to looking for
 *
 * Return : value or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tempo;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	tempo = ht->array[idx];

	while (tempo != NULL)
	{
		if (strcmp(tempo->key, key) == 0)
			return (tempo->value);
		tempo = tempo->next;
	}
	return (NULL);
}
