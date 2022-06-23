#include "main.h"

/**
 * _sqrt_recursion - finds the natural sqrt of a number
 * @n: number to find sqrt
 *
 * Return: sqrt or -1
 */

int isqrt_rec(unsigned long k, unsigned long n)
{
	unsigned long next_k = (k + n / k) / 2;
	if (k * k <= n && (k + 1) * (k + 1) > n)
		return (k);
	else
		return (isqrt_rec(next_k, n));
}
int _sqrt_recursion(int n)
{
	return (isqrt_rec(1, n));
}
