#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from one number to another
 * @n: bits
 * @m: num
 *
 * Return: number at index
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	int len = 0;

	while (x)
	{
		if (x & 1)
			len++;
		x >>= 1;
	}
	return (len);
}
