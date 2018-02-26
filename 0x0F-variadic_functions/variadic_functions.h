#ifndef FUNCTION_H
#define FUNCTION_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

typedef struct all
{

	char *p;
	void (*f)();
}all;

void print_char(va_list ap);
void print_int(va_list ap);
void print_fl(va_list ap);
void print_s(va_list ap);
#endif
