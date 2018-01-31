#include "holberton.h"
/**
 * puts2 - prints one char outta 2
 *
 * @str: string being printed
 * return: none
 */

void puts2(char *str)
{
	int i = 0;



	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
			i++;
	}
	_putchar('\n');
}
