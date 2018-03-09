#include "holberton.h"
/**
 * binary_to_uint - convert binary to unsigned int
 *
 *
 *
 * @b: string
 *
 *
 * Return: converted number or zero
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int counter;
	unsigned int expo = 1;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	counter = 0;

	while (b[counter] != '\0')
	{
		counter++;
	}


	while (counter)
	{
		counter--;
		if (b[counter] == '1' || b[counter] == '0')
		{
			if (b[counter] == '1')
			{
				sum = sum + expo;
			}
			expo = expo * 2;
		}



		else
			return (0);

	}



	return (sum);


}
