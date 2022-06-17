#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * leet - encodes a string into leet
 * @s: string to encode
 *
 * Return: encode string
 */
char *leet(char *s)
{
	int i, j;
	char *ptr = s;
	int numbs[] = {4, 3, 0, 7, 1};
	char caps[] = {'A', 'E', 'O', 'T', 'L'};
	char small[] = {'a', 'e', 'o', 't', 'l'};

	for (i = 0; s[i]; i++)
	{
		if (s[i] == caps[i] || s[i] == small[i])
		{
			s[i] = numbs[i];
		}
	}
	return (ptr);
}
