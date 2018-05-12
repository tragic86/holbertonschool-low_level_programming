#include "hash_tables.h"
/**
 * hash_table_print - print a hash table
 *
 * @ht: hash table
 *
 *
 * Return: none
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new_node;
	unsigned int i = 0;
	unsigned int count = 0;

	if (ht == NULL)
		return;

	printf("{");

	while (i < ht->size)
	{
		new_node = ht->array[i];

		while (new_node != NULL)
		{
			if (count == 1)
			{

				printf(", ");
			}
			count = 1;
			printf("'%s': '%s'", new_node->key, new_node->value);
			new_node = new_node->next;

		}
		i++;
	}
	printf("}\n");
}
