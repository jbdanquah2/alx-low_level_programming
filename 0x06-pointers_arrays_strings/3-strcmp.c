#include "main.h"
#include <string.h>

/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: string two
 * Return: 0 if equal, 15 if s1 is more or -15 if s1 is less
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != 0 || s2[i] != 0; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (-15);
			else
				return (15);
		}
	}
	return (0);
}
