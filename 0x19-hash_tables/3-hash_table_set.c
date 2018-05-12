#include "hash_tables.h"
/**
 * hash_table_set - add element to hash table
 *
 * @ht: hash table
 * @key: key
 * @value: value associated with key
 * Return: 1 if success 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t *new_node;
	int i;

	if (ht == NULL || key == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	new_node = ht->array[i];
	while (new_node != NULL)
	{

		if (strcmp(new_node->key, key) == 0)
		{
			free(new_node->value);
			new_node->value = strdup(value);
			return (1);
		}
		new_node = new_node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[i] == NULL)
	{
		ht->array[i] = new_node;
		return (1);
	}

	new_node->next = ht->array[i];
	ht->array[i] = new_node;
	return (1);

}
