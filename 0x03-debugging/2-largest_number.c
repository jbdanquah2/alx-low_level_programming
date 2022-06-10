#include "main.h"
#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && (a > c || b > c))
	{
		largest = a;
	}
	else if (b > a && (b > c || a > c))
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}