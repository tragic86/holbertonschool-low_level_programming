#include "holberton.h"
/**
 * factorial - a function the returns factorial of a number
 *
 * @n: number being given
 *
 * Return: factorial number
 *
 *
 */

int factorial(int n)
{

	if (n == 0)
	{
		return (1);
	}
	else if (n < 1)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}


}
