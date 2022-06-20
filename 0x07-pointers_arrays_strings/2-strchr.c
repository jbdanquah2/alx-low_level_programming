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
	char *ptr;
	int i;

	for (i = 0; s[i]; i++)
	{
		ptr = s;
		if (s[i] == c)
		{
			ptr = ptr + i;
			break;
		}
		else
		{
			ptr = NULL;
		}
	}
	return (ptr);
}
