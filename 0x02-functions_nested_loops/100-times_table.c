#include "holberton.h"
/**
 * print_times_table - print the times table
 *
 * @n: multiple of number
 *
 *
 * Return: none
 */

void print_times_table(int n)
{
	int row;
	int colum;
	int product;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (row = 0; row <= n; row++)
	{
		for (colum = 0; colum <= n; colum++)
		{
			product = row * colum;

			if (product > 9 && product < 100)
				print2digits(product);

			if (product > 99)
				print3digits(product);

			if (product < 10)
				print1digit(product, colum);
		}
		_putchar('\n');
	}
}

#incluce "holberton.h"
/**
 * print2digits - print two digits of num
 *
 * @product: result of two digits
 *
 * Return: none
 */

void print2digits(int product)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');

	_putchar((product / 10) + '0');
	_putchar((product % 10) + '0');
}

#include "holberton.h"
/**
 * print3digits - print three digits of num
 *
 * @product: result of three digits
 *
 * Return: none
 */

void print3digits(int product)
{
	_putchar(',');
	_putchar(' ');

	_putchar((product / 100) + '0');
	_putchar((product % 100) / 10 + '0');
	_putchar((product % 100) % 10 + '0');
}

#include "holberton.h"
/**
 * print1digit - print one digit
 *
 * @product: result of digit
 * @colum: colum being printed
 *
 * Return: none
 */


void print1digit(int product, int colum)
{
	if (colum > 0)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}

	_putchar(product + '0');
}
