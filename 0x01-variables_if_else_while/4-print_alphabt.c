#include <stdio.h>
/**
 * main - a program that prints alphabet in lowercase except for q and e
 *
 * Return: none
 */

int main(void)
{

	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			c++;
		}

	putchar(c);
	c++;
	}

	putchar('\n');
	return (0);


}
