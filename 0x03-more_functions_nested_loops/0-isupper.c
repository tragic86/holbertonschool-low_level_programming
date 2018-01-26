#include "holberton.h"
/**
 * _isupper - checks for uppercase character
 *
 * @c: letter
 *
 * Return: none
 *
 */



int _isupper(int c)
{


	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
