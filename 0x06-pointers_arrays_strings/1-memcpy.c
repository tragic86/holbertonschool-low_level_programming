#include "holberton.h"
/**
 * _memcpy - a function that copies a memory area
 * @dest: copied from
 * @src: copied to
 * @n: bytes
 * Return: pointer to dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i = 0;

	while (n > 0)
	{

		dest[i] = src[i];
		i++;
		n--;

	}

	return (dest);

}
