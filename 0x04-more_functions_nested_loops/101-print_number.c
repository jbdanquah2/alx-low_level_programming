#include <stdio.h>
#include "main.h"

/**
 * print_number - print an integer
 * @n: number to print
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
