#include "hash_tables.h"
/**
 * hash_djb2 - a hash function
 *
 *
 * @str: string
 *
 * Return: hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{



	unsigned long hash = 5381;
	int c;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);

}
