#include "holberton.h"
/**
 * print_triangle - prints a triangle
 *
 * @size: size of triangle
 *
 * Return: none
 */

void print_triangle(int size)
{
	int i;
	int j;
	int spaces;

	if (size <= 0)
	{

		_putchar('\n');

	}

	for (i = 0; i < size; i++)
	{
		spaces = size - i;

		for (j = 1; j <= size; j++)
		{
			if (j < spaces)
			{

				_putchar(' ');

			}
			else
			{

				_putchar('#');

			}
		}

		_putchar('\n');
	}
}
