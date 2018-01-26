#include "holberton.h"
/**
 * more_numbers - prints 0-14 ten times
 *
 *
 *
 *
 * Return: none
 */

void more_numbers(void)
{
	int num;
	int i;


	for (num = 0; num < 10; num++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{

				_putchar((i / 10) + '0');


			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
