#include "holberton.h"
/**
 * swap_int - a function that swaps integers
 *
 * @a: first int
 *
 * @b: second int
 * return: none
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}
