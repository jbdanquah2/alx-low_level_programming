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
	int i, j;

	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j < size; j--)
			{
				_putchar(' ');	
			} 
			_putchar(35);
		}
	}
}