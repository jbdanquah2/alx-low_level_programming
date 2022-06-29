#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a func to concat two  strings.
 * @s1: string 1
 * @s2: strign 2
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *res;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	res = malloc(sizeof(char) * (i + j + 1));

	if (res == NULL)
	{
		free(res);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		res[k] = s1[k];

	l = j;
	for (j = 0; j <= l; k++, j++)
		res[k] = s2[j];

	return (res);
}
