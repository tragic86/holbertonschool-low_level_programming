#include <stdio.h>
/**
 * main - Print alphbet in lowercase then uppercase
 *
 *
 *
 * Return: none
 */

int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}



	putchar('\n');
	return (0);
}
