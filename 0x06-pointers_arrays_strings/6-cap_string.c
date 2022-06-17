#include "main.h"
#include <string.h>

/**
 * cap_string - capitalize each word in a sentence
 * @s: sentence or string
 *
 *Return: pointer
 */
char *cap_string(char *s)
{
	int i;
	char *ptr = s;

	for (i = 0; s[i]; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
		if ((s[i - 1] == '\n' || s[i - 1] == '\t' || s[i - 1] == '"'
		|| s[i - 1] == '(' || s[i - 1] == ')' ||
		s[i - 1] == '{' || s[i - 1] == '}' || s[i - 1] == ' '
		|| s[i - 1] == '.' || s[i - 1] == ',' || s[i - 1] == ';'
		|| s[i - 1] == '!' || s[i - 1] == '?') && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
		}
	}
	return (ptr);
}
