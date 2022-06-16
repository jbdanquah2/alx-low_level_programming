#include "main.h"
#include <string.h>

/**
 * string_toupper - change string to uppercase
 * @p: any string
 *
 * Return: uppercase string
 */
char *string_toupper(char *p)
{
	int i;
	int len;
	char *ptr = p;

	len = strlen(p);
	for (i = 0; i < len; i++)
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] = p[i] - 32;
		}
	}
	return (ptr);
}
