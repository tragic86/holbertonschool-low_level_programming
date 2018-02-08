#include "holberton.h"
/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string 
 *
 * Return 1 if palindrome 0 if not
 *
 */

int is_palindrome(char *s)
{

	end = _strlen_recursion(s + 1), start = 0 , i;
	i = is_palhelper(s, start, end);
	return (i);


}


/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string
 *
 * Return: 0 if null otherwise length of string
 *
 *
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);

	else
	{
		return (1 + _strlen_recursion(s + 1));
	}

}

/**
 * is_palhelper - checks if a string is palindrome or not
 * @str: pointer to string
 * @start: first position
 * @end: last position
 *
 * Return: 1 if palindrome 0 if otherwise
 *
 */


int is_palhelper(int start, int end, char *str)
{
	if (str[start] != str[end])
	{	
		return (0);
	}
	else if (start == end)
	{	
		return (1);
	}
	else
		return (is_palhelper(start++, end--, str));
	return (0);
}
