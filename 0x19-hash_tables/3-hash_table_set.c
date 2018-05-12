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

	if (ht == Null || key == Null)
		return (0);

	i = key_index(key, ht->size);
	

	while (ht->array[i] != NULL)
	{

		if (strcmp(key, ht->key == 0));
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
		ht->array[i] = ht->array[i]->next;
	}

		  

	new_node = malloc (sizeof(hash_node_t));
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
