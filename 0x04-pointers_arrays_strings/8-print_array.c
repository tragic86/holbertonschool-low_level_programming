#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array
 *
 * @a: pointer to an array
 *
 * @n: number of elements
 * return: none
 */


void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
		i++;
	}
	printf("\n");
}
