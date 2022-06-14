#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse with _putchar
 * @s: string to print
 * Return: void
 */
void print_rev(char *s)
{
	int len; 

	len = strlen(s);
	while(len > -1 )
	{
		_putchar(s[--len]);
	}
	_putchar('\n');
}
