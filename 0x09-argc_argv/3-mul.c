#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiply two numbers
 *
 * @argc: argument count
 * @argv: arguments passed
 * Return: 1 if less than 3 arguments 0 if otherwise
 */

int main(int argc, char *argv[])
{
	int product;


	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{

		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", product);
		return (0);
	}

}
