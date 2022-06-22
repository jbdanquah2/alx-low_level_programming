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
	int i, j, x, y, sum = 0, sum2 = 0;
	int rows = size, columns = size;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j ++)
		{
			sum += *(a + (i * columns + i));
			break;
		}
	}
	printf("%d, ", sum);

	for (x = 0; x < rows; x++)
	{
		for (y = columns - 1 - x; y >= 0; y--)
		{
			sum2 += *(a + (x * columns + y));
			break;			
		}
	}
	printf("%d\n", sum2);
}
