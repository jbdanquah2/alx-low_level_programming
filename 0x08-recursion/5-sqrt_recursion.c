#include "main.h"

/**
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
/**
 * _sqrt_recursion - calls the find_sqrt function
 * @n: number to find sqrt
 *
 * Return: sqrt of a number
 */
int _sqrt_recursion(int n)
{
	return (find_sqrt(1, n));
}
