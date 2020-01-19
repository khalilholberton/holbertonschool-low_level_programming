#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht : hash table
 * Return : nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	int y;
	hash_node_t *tempo;

	i = 0;

	if (!ht)
		return;
	y = 0;
	printf("{");
	while (i < ht->size)
	{
		tempo = ht->array[i];
		while (tempo)
		{
			if (y == 1)
				y = 1;
			else
			{
				printf(", ");
			}
			printf("'%s': '%s'", tempo->key, tempo->value);
			tempo = tempo->next;
		}
		i++;

	}
	printf("}\n");
}
