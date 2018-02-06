#include "holberton.h"
/**
 * _strchr - a function that finds a character in a string
 * @s: string
 * @c: character to be found
 *
 * Return: pointer to first character or NULL if not found
 */

char *_strchr(char *s, char c)
{


	while (*s != '\0')
	{
		if (*s == c)

			return (s);

		s++;

	}

	if (*s == c)
	{
		return (s);
	}

	else
	{
		return ('\0');
	}


}
