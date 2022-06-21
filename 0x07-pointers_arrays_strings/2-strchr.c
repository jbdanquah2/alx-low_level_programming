#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: char to locate
 *
 * Return: pointer to the first occurence of c
 */
char *_strchr(char *s, char c)
{
	int i;

	if (!c)
	{
		return (NULL);	
	}
	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			s = s + i;
			return (s);
		}
	}
	return (NULL);
}
