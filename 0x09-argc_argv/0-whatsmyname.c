#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints its name and new line
 * @argc: argument count
 * @argv: argument being passed
 *
 * Return: none
 *
 */

int main(int argc, char *argv[])
{

	while (argc--)
	{
		printf("%s\n", argv[0]);

	}
	return (0);
}
