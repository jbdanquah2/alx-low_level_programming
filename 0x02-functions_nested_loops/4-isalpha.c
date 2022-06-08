#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks if char is alphabet
 * @c: the char that needs to be checked
 *
 * Return: 1 if true and 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
