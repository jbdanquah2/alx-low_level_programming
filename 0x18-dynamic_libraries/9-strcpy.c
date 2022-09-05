#include "main.h"
#include <string.h>

/**
 * _strcpy - copies a string to another
 * @dest: buffer to be copied to
 * @src: string to be copied
 * Return: an array
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (ptr);
}
