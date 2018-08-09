#include "search_algos.h"
/**
 * linear_search - search for value
 * @array: a pointer to array
 * @size: element in array
 * @value: value to search for
 *
 * Return:  value otherwise  -1
 *
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
