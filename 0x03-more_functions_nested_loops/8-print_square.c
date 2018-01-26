#include "holberton.h"
/**
 * print_square - program print a square
 *
 * @size: size of square
 * Return: none
 *
 */

void print_square(int size)
{

	int i;
	int j;

	if (size <= 0)
	{

		_putchar('\n');

	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{

				_putchar('#');

			}

			_putchar('\n');
		}
	}
}
