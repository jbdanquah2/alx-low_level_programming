#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of diagonals of a square array
 * @a: array
 * @size: size of the array
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			sum = sum + a[i];
		}
	}
	printf("%d\n", sum);
}
