#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that put two strings together
 *
 * @s1: first string
 * @s2: second string
 *
 *
 * Return: pointer to new string
 *
 */

char *str_concat(char *s1, char *s2)
{

	int i;
	int j;
	char *dammit;

	if (s1 == 0)
	{
		s1 = ("");
	}

	if (s2 == 0)
	{
		s2 = ("");
	}





	for (i = 0; i != '\0'; i++)
		;
	for (j = 0; j != '\0'; j++)
		;
	dammit = malloc(sizeof(char) * i + j + 1);

	for (i = 0; s1[i] != '\0'; i++)
		dammit[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		dammit[i + j] = s2[j];

	dammit[i + j] = '\0';

	return (dammit);
}
