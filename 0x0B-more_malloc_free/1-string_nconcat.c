#include <stdlib.h>
#include "holberton.h"
/**
 * string_nconcat - a function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: bytes
 * Return: pointer to new string
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *string;
	unsigned int i, j;


	if (s1 == NULL)
		s1 = ("");

	if (s2 == NULL)
		s2 = ("");

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n > j)
		n = j;
	string = malloc(sizeof(char) * (i + n) + 1);
		if (string == NULL)
			return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		string[i] = s1[i];

		for (j = 0; j < n; j++)
		{
			string[i + j] = s2[j];

		}
	string[i + j] = '\0';
	return (string);
}
