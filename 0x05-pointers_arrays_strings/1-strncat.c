#include "holberton.h"
/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: first string
 * @src: second string
 * @n: where most bytes will be used
 *
 * Return: second string
 */

char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int k;

	while (dest[i] != '\0')
	{
		i++;
	}

	k = 0;

	while (src[k] != '\0' && k < n)
	{

		dest[i] = src[k];
		k++;
		i++;
	}
	return (dest);
}
