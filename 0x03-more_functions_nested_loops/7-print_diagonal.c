#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line
 *
 * @n: number of \
 *
 * Return: none
 *
 */

void print_diagonal(int n)
{
	int i;
	int spaces;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (spaces = 0; spaces < x; spaces++)
			{

				_putchar(' ');

			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
