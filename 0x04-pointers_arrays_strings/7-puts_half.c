#include "holberton.h"
/**
 * puts_half - print half of a string
 *
 * @str: string to be printed
 *
 * return: none
 *
 */

void puts_half(char *str)
{
	int length;
	int i;
	int string;

	length = _strlen(str);

	if (length % 2 != 0)
	{
		string = (length / 2) + 1;

	}
	else
	{
		string = length / 2;
	}

	i = string;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
			 i++;
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
