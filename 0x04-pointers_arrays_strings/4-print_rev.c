#include "holberton.h"
/**
 * print_rev - print string in reverse
 *
 * @s: string to be printed
 * return: none
 *
 *
 */

void print_rev(char *s)
{

	char *string = s + _strlen(s);

	while (string > s)
	{
		_putchar(*string);
		string--;
	}
	_putchar('\n');
}


/**
 * _strlen - function that returns a string
 *
 * @s: counter to return string
 * Return: length of string
 *
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);



}
