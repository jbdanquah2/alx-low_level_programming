#include "main.h"

/**
 * _memset - fills memory with a constant bytes
 * @s: pointer
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: a pointer to the memory area of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*ptr = b;
		ptr++;
	}
	return (s);
}
