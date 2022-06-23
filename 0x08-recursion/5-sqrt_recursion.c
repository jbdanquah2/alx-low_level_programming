#include "main.h"

/**
 * _sqrt_recursion - finds the natural sqrt of a number
 * find_sqrt - checks
 * @n: number to find sqrt
 * @k: checker
 * Return: sqrt or -1
 */

int find_sqrt(int k, int n)
{
	unsigned long next_k = (k + n / k) / 2;

	if (n < 0)
		return (-1);
	if (k * k <= n && (k + 1) * (k + 1) > n)
		return (k);
	else
		return (find_sqrt(next_k, n));
}
int _sqrt_recursion(int n)
{
	return (find_sqrt(1, n));
}
