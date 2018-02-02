#include "holberton.h"
/**
 * string_toupper - a function that changes lowercase letters
 *
 * @s: string to check
 *
 * Return: string
 *
 *
 */


char *string_toupper(char *s)
{

	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}

	return (s);

}
