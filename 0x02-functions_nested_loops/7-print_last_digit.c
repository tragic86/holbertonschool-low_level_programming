#include "holberton.h"
/**
 * print_last_digit - print the last digit of a num
 *
 *
 * @digit: the number being used
 *
 * Return: last digit
 */

int print_last_digit(int digit)
{

	if (digit < 0)
	{
		digit = digit * -1;

	}
	_putchar((digit % 10) + '0');
	return (digit % 10);
}
