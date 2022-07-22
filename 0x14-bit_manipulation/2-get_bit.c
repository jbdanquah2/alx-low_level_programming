#include "main.h"

/**
 * get_bit - gets the bit a specific index
 * @n: bits
 * @index: index
 *
 * Return: bit at an index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	return ((n >> index) & 1);
}
