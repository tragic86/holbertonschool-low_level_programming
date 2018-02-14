#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - create an array or chars
 *
 * @size: size of array
 * @c: specific char being used
 *
 * Return: pointer to array or Null if fail
 */

char *create_array(unsigned int size, char c)
{

	char *space;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	space = malloc(size * sizeof(*space));
	if (space == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		space[i] = c;
		i++;
	}

	return (space);
}
