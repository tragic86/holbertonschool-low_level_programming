#include "holberton.h"
/**
 * print_numbers - prints the number
 *
 *
 * Return: none
 *
 */
void print_numbers(void)
{
	int num;


	for (num = 0; num < 10; num++)
	{

		_putchar(num + '0');

	}
	_putchar('\n');
}
