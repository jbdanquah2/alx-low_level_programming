#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: number chars to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (ptr);
}
