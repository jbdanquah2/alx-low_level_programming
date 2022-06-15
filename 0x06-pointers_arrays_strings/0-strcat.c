#include "main.h"
#include <string.h>

/**
 * _strcat - concats two strings
 * @dest: destination string
 * @src: source string
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;
	int i, len1, len2;

	len1 = strlen(dest);
	len2 = strlen(src);
	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	*dest = '\0';
	return (ptr);
}
