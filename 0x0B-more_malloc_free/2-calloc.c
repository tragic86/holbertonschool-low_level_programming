#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - a function that makes zeros
 *
 *
 * @nmemb: members
 * @size: size of array
 * Return: void pointer
 *
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *string;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	string = malloc((size) * nmemb);
	if (string == NULL)
		return (NULL);


	for (i = 0; i < nmemb * size; i++)
		*((char *)string + i) = 0;

	return (string);







}
