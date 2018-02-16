#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - a function that creates an array of integers
 *
 * @min: minum number
 * @max: max number
 *
 * Return: pointer to new string
 *
 *
 */

int *array_range(int min, int max)
{

	int *string;
	int i;
	int j = 0;

	if (min > max)
		return (NULL);

	for (i = 0; i <= max; i++)
		;
	string = malloc(sizeof(int) * ((max - min) + 1));
	if (string == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		string[j] = i;
		j++;
	}

	return (string);



}
