#include "main.h"

/**
 * flip_bits - returns the num of bits needed to flip from one num to another
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
