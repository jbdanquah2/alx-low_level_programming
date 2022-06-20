#include "main.h"
#include <string.h>

/**
 * rot13 - encode a string with ROT-13
 * @s: string to encode
 *
 * Return: char
 */

char *rot13(char *s)
{
	int i, j;
	int *ptr = s;

	for (i = 0; s[i]; i++)
	{
		s[i] = s[i] + 13;
	}
	return (ptr);
}
