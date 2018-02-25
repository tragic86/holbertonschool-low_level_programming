#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - return the sum of all parameters
 * @n: number being used
 * @separator: separator
 *
 * Return: 0
 *
 *
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);



}
