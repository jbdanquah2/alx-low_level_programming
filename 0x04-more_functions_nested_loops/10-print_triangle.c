#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, z;

	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (z  = 0; z < (size - i); z++)
			{
				_putchar(' ');
			}
			for (j = 0; j < i; j++)
			{
				_putchar(35);
			}
			_putchar('\n');  
		}
	}
}
