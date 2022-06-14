#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string to print half
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int len;
	int halfLen;

	len = strlen(str);
	if (len % 2 != 0)
	{
		halfLen = (len + 1) / 2;
	}
	else
	{
		halfLen = len / 2;
	}
	for (i = halfLen; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
