#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer to string to print
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
