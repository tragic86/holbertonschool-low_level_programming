#include "holberton.h"
/**
 * print_line - function that draws a line
 *
 *
 *
 *  @n: number of lines
 *
 * Return: none
 */

void print_line(int n)

{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{

			_putchar('\n');

		}

		_putchar('_');
	}
	_putchar('\n');
}
