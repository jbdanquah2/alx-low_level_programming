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
	char numbs[] = {'4', '3', '0', '7', '1'};
	char caps[] = {'A', 'E', 'O', 'T', 'L'};
	char small[] = {'a', 'e', 'o', 't', 'l'};

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == caps[j] || s[i] == small[j])
			{
				s[i] = numbs[j];
			}
		}
	}
	return (ptr);
}
