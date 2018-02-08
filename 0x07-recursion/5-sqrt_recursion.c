#include "holberton.h"
/**
 * _sqrt_recursion - a function that returns natural square root
 *
 * @n: number
 *
 *
 * Return: natural square root number
 *
 */

int _sqrt_recursion(int n)
{


	if (n == 1)
	{
		return (1);
	}
	if (n == 0)
		return (0);
	if (n < 1)
		return (-1);

	return (_sqrt_help(n, 1));






}











/**
 * _sqrt_help - helper function for square root
 * @i: number to sqaure root
 * @j: combinations
 *
 * Return: square root if found -1 otherwise
 *
 *
 */

int _sqrt_help(int i, int j)
{

	if (j > (i * j))
	{
		return (-1);
	}


	if ((j * j) == i)
	{
		return (j);
	}

	return (_sqrt_help(j, i + 1));
}
