#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - print a string
 *
 * @format: size of string
 * Return: none
 *
 */


void print_all(const char * const format, ...)
{

	all list[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_fl},
		{"s", print_s},
		{NULL, NULL}
	};


	int counter = 0;
	int x = 0;
	char *empty = "";
	char *sep = ", ";
	va_list ap;


	va_start(ap, format);

	while (format != NULL && format[counter] != '\0')
	{
		x = 0;

		while (list[x].p != '\0')
		{
			if (format[counter] == list[x].p[0])
			{

				printf("%s", empty);
				list[x].f(ap);
				empty = sep;
			}
			x++;

		}
		counter++;
	}

	printf("\n");
	va_end(ap);
}
/**
 *print_char- main for iterating through an string
 * @ap: argument list
 *
 * Return: will print numbers in the string
 */

	void print_char(va_list ap)
	{
		printf("%c", va_arg(ap, int));
	}
/**
 *print_int- function for intger
 * @ap: argument list
 * Return: will print characters in the string
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 *print_fl- function for float
 * @ap: argument list
 * Return: will print numbers in the string
 */
void print_fl(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 *print_s- main for iterating through an string
 * @ap: argument list
 * Return: will print numbers in the string
 */
void print_s(va_list ap)
{
	char *string;

	string = va_arg(ap, char *);
	if (string == NULL)
	{
		string = "(nil)";
	}
	printf("%s", string);
}

