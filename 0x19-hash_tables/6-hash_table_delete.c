#include "hash_tables.h"
/**
 * hash_table_delete - delete table
 * @ht: hash table
 * Return: none
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *ptr;
	hash_node_t *temp;

	while (i < ht->size)
	{

		ptr = ht->array[i];
		while (ptr != NULL)
		{
			temp = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
			ptr = temp;
		}

		i++;
	}
	free(ht->array);
	free(ht);

}
