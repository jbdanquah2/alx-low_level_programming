#include "main.h"

/**
 * is_prime_number - check for prime number
 * @n: number to check
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	i = n / 2;

	if (i == 1)
	{
		return (1);	
	}
	else
	{
		i = n / 2;

		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			i = i - 1;
			return (is_prime_number(n));
		}
	}
}
