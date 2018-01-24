#include "holberton.h"
/**
 * print_alphabet - a function that print the alphabet with new line
 *
 *
 *
 * Return: none
 *
 */

void print_alphabet(void)
{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);

	}
	_putchar('\n');

}
