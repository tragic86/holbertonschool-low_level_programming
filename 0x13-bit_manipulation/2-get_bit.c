#include "holberton.h"
/**
 * get_bit - return the value of a bit at index
 *
 * @index: index
 *
 * @n: number being passed
 *
 * Return: value at index
 */

int get_bit(unsigned long int n, unsigned int index)
{

	unsigned int i;

	i = 0;
	while (i <= index)
	{

		if (i == index)
			return (n & 1);

		else

			i++;
		n = n >> 1;
		if (n == 0)
			return (-1);
	}

	return (-1);
}
