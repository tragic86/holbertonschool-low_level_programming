#include <stdio.h>
/**
 * main -  prints all the numbers of base 16 in lowercase
 *
 *
 * Return: none
 *
 */

int main(void)
{
	int i;
	char c;

	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	c = 'a';

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}


	putchar('\n');
	return (0);
}
