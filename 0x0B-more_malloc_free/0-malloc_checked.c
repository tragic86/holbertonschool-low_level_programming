#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * malloc_checked - a function that allocates memory
 *
 * @b: memory to allocate
 *
 *
 * Return: pointer to new memory
 */
void *malloc_checked(unsigned int b)
{

	unsigned int *string;



	string = malloc(sizeof(unsigned int) * b);
		if (string == NULL)
		{
			exit(98);
		}
		else
		{
			return (string);
		}






		return (0);


}
