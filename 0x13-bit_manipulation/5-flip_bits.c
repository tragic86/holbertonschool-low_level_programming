#include "holberton.h"
/**
 * flip_bits - a function that returns the number of bits
 *
 *
 * @n: number
 *
 * @m: number being fliped
 *
 * Return: none
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	int i = 0;
	unsigned long int flip = n ^ m;

	while (flip)
	{
		if (flip & 1)
		{

			i++;



		}
		flip = flip >> 1;
	}

	return (i);
}
