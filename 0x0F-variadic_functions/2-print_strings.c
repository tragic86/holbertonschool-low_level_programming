#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - print strings
 * @n: number being used
 * @separator: separator
 *
 * Return: 0
 *
 *
 *
 */



void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	char *s;

	va_list ap;




	va_start(ap, n);

	s = va_arg(ap, char*);

	for (i = 0; i < n; i++)
	{
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (separator != NULL && i != n - 1)
			printf("%s", separator);

		s = va_arg(ap, char*);
	}

	printf("\n");
	va_end(ap);
}
