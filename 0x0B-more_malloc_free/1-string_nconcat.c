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
	unsigned int i, j, k;

	if (s1 == 0 || s2 == 0)
		return (NULL);


	if (s1 == NULL)
		s1 = ("");

	if (s2 == NULL)
		s2 = ("");


	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	string = malloc(sizeof(char) * i + j + 1);
		if (string == NULL)
			return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		string[i] = s1[i];
	if (n >= j)
		for (k = 0; k < j; k++)
			string[j] = s2[k];

	else
		for (k = 0; k < n; k++)
			string[j] = s2[k];

	for (k = 0; s2[k] != '\0'; k++)
		string[i + k] = s2[k];

	string[k + i] = '\0';
	return (string);
}
