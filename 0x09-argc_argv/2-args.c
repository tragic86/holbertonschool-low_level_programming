#include <stdio.h>
#include <stdlib.h>
/**
 * main - program to print all arguments
 *
 * @argc: argument count
 * @argv: arguments being passed
 *
 * Return: none
 */

int main(int argc, char *argv[])
{
	int i = 0;


	while (i < argc)
	{
		printf("%s\n",  argv[i]);
		i++;
	}
	return (0);
}
