#include "holberton.h"
/**
 * is_prime_number - number checking for prime number
 *
 * @n: number
 *
 *
 * Return: prime number
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helper_prime(n, 2));
	}



}

/**
 * helper_prime - helper function for prime number
 * @num: number
 *
 * @i: count
 * Return: 1 if prime 0 if otherwise
 */

int helper_prime(int num, int i)
{


	if (num == i)
	{
		return (1);
	}
	if (num % i == 0)
	{
		return (0);
	}
	else
		return (helper_prime(num, i + 1));

}
