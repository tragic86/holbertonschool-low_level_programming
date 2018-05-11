#include "hash_tables.h"
/**
 * hash_table_create - create a function for hash table
 *
 * @size: - size of array
 *
 * Return: pointer to new hash table
 */



hash_table_t *hash_table_create(unsigned long int size)
{



	hash_table_t *new_hash;
	unsigned long int counter = 0;

	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
	{
		return (NULL);

	}

	new_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}



	while (counter < size)
	{
		new_hash->array[counter] = NULL;
		counter++;

	}
	new_hash->size = size;


	return (new_hash);


}
