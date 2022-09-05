#include "main.h"
#include <string.h>

/**
 * _strstr -  locates a substring
 * @haystack: string to search
 * @needle: string to locate
 *
 * Return: pointer to the beginning of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if (!*pattern)
		{
			return (start);
		}
		haystack = start + 1;
	}
	return (NULL);
}
