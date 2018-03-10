#ifndef NUMBERS_H
#define NUMBERS_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int _putchar(char c);
int clear_bit(unsigned long int *n, unsigned int index);
#endif
