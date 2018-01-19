#include <stdio.h>
/**
 * main - a program that print the alphbet in lowercase
 *
 * Return: none
 *
 */

int main(void)
{

	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);

}
