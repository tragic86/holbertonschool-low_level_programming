#include "holberton.h"
/**
 * reverse_array - reverses the an array of intgers
 * @a: array
 *
 * @n: number of elements in array
 *
 * return: none
 *
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;


	n--;

	while (i < n)
	{
		temp = a[n];
		a[n] = a[i];
		a[i] = temp;
		i++;
		n--;
	}



}
