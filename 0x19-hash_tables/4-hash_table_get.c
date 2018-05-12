#include "hash_tables.h"
/**
 * hash_table_get - get a hash table value
 *
 * @ht: hash table
 *
 * @key: key
 * Return: value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new_node;
	int i;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	new_node = ht->array[i];

	if (new_node == NULL)
		return (NULL);

	while (new_node != NULL)
	{
		if (strcmp(key, new_node->key) == 0)
			return (new_node->value);
		new_node = new_node->next;
	}
	return (NULL);
}
