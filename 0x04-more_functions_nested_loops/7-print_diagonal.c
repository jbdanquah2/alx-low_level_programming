#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print diagonal on the cmd
 * @n: number of times to print
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (j == i)
				{
					_putchar('\\');
					_putchar('\n');
					break;
				}
				else
				{
					_putchar(' ');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
