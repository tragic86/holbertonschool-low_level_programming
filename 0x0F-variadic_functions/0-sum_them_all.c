#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - return the sum of all parameters
 * @n: number being used
 *
 *
 * Return: 0 if n is equal to zero sum if otherwise
 *
 *
 *
 */

int sum_them_all(const unsigned int n, ...)
{

	unsigned int i;
	unsigned int sum;

	va_list ap;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}




	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);


	}

	va_end(ap);
	return (sum);

}
