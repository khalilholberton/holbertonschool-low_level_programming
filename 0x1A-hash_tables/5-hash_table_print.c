#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht : hash table
 * Return : nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *tempo;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tempo = ht->array[i];
		while (tempo)
		{
			printf("'%s': '%s'", tempo->key, tempo->value);
			printf(", ");
			tempo = tempo->next;
		}

	}
	printf("}\n");
}
