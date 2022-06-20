#include "main.h"

/**
 * _memcpy - copies memory area from src to dest
 * @dest: destination mem
 * @src: source mem
 * @n: number of bytes to copy
 *
 * Returns: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ptr = dest;

	for (i = 0; i < n; i++)
	{
		ptr[i] = src[i];
	}
	return (dest);
}
