#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the las digit of a number
 * @i: number to check
 *
 * Return: value of the last digit
 */
int print_last_digit(int i)
{
	int last_digit;

	last_digit = i % 10;
	if (last_digit < 0)
	{
		_putchar(last_digit + '0');
		return (-last_digit);
	}
	_putchar(last_digit + '0');
	return (last_digit);
}

