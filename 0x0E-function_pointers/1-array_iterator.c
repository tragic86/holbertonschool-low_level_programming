#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - function that excutes function in array
 *
 * @array: array being used
 *
 * @size: size of array
 *
 * @action: pointer to function
 *
 *
 * Return: none
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	unsigned int i;

	if (array == NULL || action == NULL)
		return;



	i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;

	}


}
