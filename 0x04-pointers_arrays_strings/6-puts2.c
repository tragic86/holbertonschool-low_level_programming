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


	if (*str == '\0')
		return;


	while (str[i] != '\0')
	{
		if (str[i] % 2 == 0)
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}
