#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: bytes to search
 *
 * Return: pointer to the byte that matches
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				ptr = &(s[i]);
				return (ptr);
			}
		}
	}
	return (NULL);
}
