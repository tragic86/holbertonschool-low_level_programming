#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - a function that returns pointer to string
 *
 * @str: string
 * Return: Null if str is Null or pointer to dup string
 *
 */

char *_strdup(char *str)
{
	int i;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * (_strlen(str) + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of the string
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
