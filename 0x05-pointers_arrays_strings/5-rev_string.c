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
	char temp;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
