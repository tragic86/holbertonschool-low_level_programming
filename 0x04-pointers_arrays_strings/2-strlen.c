#include "holberton.h"
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
