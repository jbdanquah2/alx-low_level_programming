#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks if number is digit
 * @c: number to check
 *
 * Return: 1 if true and 0 if false
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
