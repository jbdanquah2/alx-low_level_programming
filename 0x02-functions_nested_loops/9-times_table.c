#include <stdio.h>
#include "main.h"

/**
 * times_table - prints time table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int n = j * i;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (n <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(n + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(n / 100 + '0');
				_putchar(n % 10 + '0');
			} 
		}
		_putchar('\n');
	}
}
