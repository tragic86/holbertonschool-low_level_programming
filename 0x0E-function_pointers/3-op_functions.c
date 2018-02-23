#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - result of two numbers using addition
 * @a: first number
 * @b: second number
 * Return: sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - result of two numbers using subtraction
 * @a: first number
 * @b: second number
 * Return: difference of two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);

}

/**
 * op_mul - result of two numbers using muliplication
 * @a: first number
 * @b: second number
 * Return: product of two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);

}

/**
 * op_div - result of two numbers using division
 * @a: first number
 * @b: second number
 * Return: quotient of two numbers
 *
 */

int op_div(int a, int b)
{


	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);

}

/**
 * op_mod - find modolus of number
 * @a: first number
 * @b: second number
 * Return: modolus of number
 *
 */
int op_mod(int a, int b)
{


	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
