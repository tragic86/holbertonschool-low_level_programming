#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - a function thats prints a name
 *
 * @name: name
 * @f: function
 *
 * Return: none
 *
 *
 */

void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
		return;


	f(name);





}
