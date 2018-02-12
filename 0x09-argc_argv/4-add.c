#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int isnumber(char *num);
/**
 * main - program to add positive numbers
 *
 * @argc: argument count
 * @argv: arguments being passed
 *
 * Return: 1 if Error 0 otherwise
 */
int main(int argc, char *argv[])
{

	int i;
	int sum;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}


	sum = 0;
	i = 1;

	while (i < argc)
	{
		if (!isnumber(argv[i]))
		{
			printf("Error\n");
			return (1);

		}
		else
		{
			sum = sum + atoi(argv[i]);
		}
		i++;

	}
	printf("%i\n", sum);
	return (0);

}

/**
 * isnumber - check if argument passed is a number
 * @num: argument to check
 * Return: 1 if number 0 otherwise
 */
int isnumber(char *num)
{
	int i = 0;

	while (num[i] != '\0')
	{
		if (isdigit(num[i]))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
