#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - a string in reverse with _putchar
 * @s: string to print
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int len;
	char *temp = s;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		temp[--len] = s[i];
	}
	printf("%s - this is temp", temp);
}
