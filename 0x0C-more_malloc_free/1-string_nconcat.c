#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of chars of s2 to concat
 *
 * Return: pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, j;
	int len = strlen(s2);

	/**
	 * if n is greater the length of s2,
	 * then set n = length of s2
	 */
	if ((int)n >= len)
		n = len;
	/**
	 * allocate memoory using malloc
	 */
	ptr = malloc(sizeof(char) * strlen(s1) * n);

	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];

	for (j = 0; j <= (int)n; j++)
		ptr[j + i] = s2[j];

	ptr[j + i - 1] = '\0';

	return (ptr);
}

