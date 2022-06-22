#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints a string with recursion
 * @s: string to print
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i])
	{
		_putchar(s[i]);
		i++;
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
