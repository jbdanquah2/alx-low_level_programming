#include <stdio.h>
#include "main.h"

/**
 * print_to_98
 * @n: number to print from
 *
 * Return: result
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (n == 98)
		{
			printf("%d", i);
		}
		else
		{
			printf("%d, ", i);
		}
	}
	printf("\n");
}
