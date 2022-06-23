#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if true or 0 if false
 */
int is_palindrome(char *s)
{
	int i, len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - 1 - i])
			return (0);
	}
	return (1);
}
