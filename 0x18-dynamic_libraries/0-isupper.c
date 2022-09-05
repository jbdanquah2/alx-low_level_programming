#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks if a char is uppercase
 * @c: char to check
 * Return: 1 if true or 0 if false
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
