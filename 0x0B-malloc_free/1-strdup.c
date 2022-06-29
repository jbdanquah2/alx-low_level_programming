#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a sup string
 * @str: string dup
 *
 * Return: a pointer
 */
char *_strdup(char *str)
{
	char *newstr;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		newstr = (char *)malloc(sizeof(char) * (i + 1));

	if (newstr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		newstr[j] = str[j];

	return (newstr);
}