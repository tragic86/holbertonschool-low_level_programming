#include "holberton.h"
/**
 * rev_string - print a string in reverse
 *
 * @s: string to be printed
 *
 * return: none
 *
 */


void rev_string(char *s)
{

	char *string = s;
	char *end = string + _strlen(string) - 1;

	while (end > string)
	{
		char temp = *end;
		*end-- = *string;
		*string++ = temp;
	}




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
