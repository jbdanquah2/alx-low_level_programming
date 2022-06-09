#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a line
 * @n: number of times to print _
 *
 * Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
