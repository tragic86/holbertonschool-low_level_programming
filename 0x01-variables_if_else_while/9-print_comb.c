#include <stdio.h>
/**
 * main - a program prints all combinations of single nums
 *
 * Return: none
 *
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i < '9')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}



	putchar('\n');
	return (0);
}
