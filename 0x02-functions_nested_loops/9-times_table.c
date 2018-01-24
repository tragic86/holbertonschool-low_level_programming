#include "holberton.h"
/**
 * 
 *
 *
 *
 *
 */

void times_table(void)
{
	int i;
	int j;
	int l;


	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			l = (i * j);
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (l > 10)
			{
				_putchar((l / 10) + '0');
				_putchar((l % 10) + '0');
			}
			else if (l < 10 && j != 0)
			{
				_putchar(' ');
				_putchar((l % 10) + '0');
			}
			else
			{
				_putchar((l % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
