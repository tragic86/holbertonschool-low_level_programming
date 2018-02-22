#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - a function that searches for an integer
 *
 * @array: array
 * @cmp: compare function
 * @size: size of array
 * Return: -1 if no element found 0 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);


	i = 0;

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;

	}
	return (-1);
}
