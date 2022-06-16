#include "main.h"
#include <string.h>

/**
 * _strncat - concats two strings
 * @dest: destination string
 * @src: source string
 * @n: number of chars to be added
 * Return: char;
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int len, i;

	len = strlen(dest);
	for (i = 0; i < n; i++)
	{
		dest[len + i] = src[i];
	}
	return (ptr);
}

