#include "holberton.h"
/**
 * set_bit - set value at given index
 *
 *
 * @index: index
 *
 * @n: number being passed
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */



int set_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int mask = 1;

	if (n == 0)
		return (-1);
	if (index > 64)
		return (-1);

	mask = mask << index;
	*n = *n | mask;

	return (1);







}
