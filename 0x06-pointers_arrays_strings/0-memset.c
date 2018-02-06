#include "holberton.h"
/**
 * _memset - function that fills memory with byte
 *
 * @s: memory area pointed to
 * @b: byte
 * @n: fills first byte with
 * Return: pointer to s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
