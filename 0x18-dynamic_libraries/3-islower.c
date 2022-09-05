#include <stdio.h>
#include "main.h"

/**
 * _islower - checks if a char is lower
 *
 * @c: the number to be checked
 * Return: 1 if true and 0 if false
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
