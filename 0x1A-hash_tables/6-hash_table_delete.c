#include "hash_tables.h"

/**
 * hash_table_delete -  function that deletes a hash table.
 * @ht : hash table
 * Return : nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int count;
	hash_node_t *current;
	hash_node_t *current2;

	if (!ht)
	{
		return;
	}
	count = 0;
	while (count < ht->size)
	{
		current = ht->array[count];
		while (current)
		{
			current2 = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = current2;
		}
		count++;
	}
	free(ht->array);
	free(ht);
}
