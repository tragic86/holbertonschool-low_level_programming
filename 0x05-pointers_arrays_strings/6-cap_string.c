#include "holberton.h"
/**
 * cap_string - a function the makes words captial
 *
 * @s: string being used
 *
 * Return: string
 *
 *
 */

char *cap_string(char *s)
{

	int i = 0;


	while (s[i] != '\0')
	{
		if ((i == 0 || s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t'
		     || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.'
		     || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"'
		     || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{'
		     || s[i - 1] == '}') && (s[i]  >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
		}
		i++;

	}

	return (s);
}
