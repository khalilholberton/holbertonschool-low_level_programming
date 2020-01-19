#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht : hash table
 * Return : nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	int y;
	unsigned long int count;
	hash_node_t *tempo;

	if (!ht)
		return;
	y = 0;
	printf("{");
	for (count = 0; count < ht->size; count++)
	{
		tempo = ht->array[count];
		while (tempo)
		{
			if (y == 0)
				y = 1;
			else
				printf(", ");
			printf("'%s': '%s'", tempo->key, tempo->value);
			tempo = tempo->next;
		}
	}
	printf("}\n");
}
