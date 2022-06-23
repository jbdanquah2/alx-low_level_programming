#include "main.h"

/**
 * is_prime_number - check for prime number
 * @n: number to check
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		if (n % (n / 2) == 0)
		{
			return (0);
		}
		else
		{
			return (is_prime_number(n / 2));
		}
	}
}
