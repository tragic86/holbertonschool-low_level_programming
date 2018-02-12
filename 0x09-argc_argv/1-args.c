#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints number of arguments passed
 *
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: none
 */

int main(int argc, char *argv[])
{

	printf("%d\n", argc - 1);
	argv[0] = 0;
	return (0);
}
