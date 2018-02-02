#include "holberton.h"
/**
 * leet - a function that encodes a string
 * 
 * @s: string
 *
 * Return: string
 *
 */



char *leet(char *s)
{
	int i = 0;
	int k = 0;

	char *temp1 = "AaeEoOtTlL";
	char *temp2 = "4433007711";

	while (s[i] != '\0')
	{
		i++;
		while (s[k] != '\0')
		{
			k++;
			if (s[i] == temp1[k])
			{
				s[k] = temp2[k];
			}
		
		
		}
	}
	return (s);
}
