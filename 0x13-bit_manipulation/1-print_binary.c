#include "holberton.h"
/**
 * print_binary - print binary number
 *
 *
 * @n: number being passed
 *
 * Return: none
 */


void print_binary(unsigned long int n)
{
	unsigned long int mask = 0;
	int count = 0;

	mask = ~mask;
	mask = mask >> 1;
	mask = ~mask;

	if (n == 0)
		_putchar('0');

	while (mask > 0)
	{
		if ((mask & n) == 0)
		{
			if (count == 1)
				_putchar('0');
		}
		else
		{
			count = 1;
			_putchar('1');
		}
		mask = mask >> 1;
	}

}
