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
			
			if (n % 10 == n)
			{
				printf(" %d", n);
			}
			else
			{
				printf("%d", n);
			}
			if (j == 9)
			{
				continue;
			}
			else
			{
				printf(", ");
			}
		}
		if (j == 10)
		{
			printf("\n");
		}
		else
		{
			printf("%d\n", i);
		}
	}
}
