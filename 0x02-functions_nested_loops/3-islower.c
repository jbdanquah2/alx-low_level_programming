#include <stdio.h>
#include "main.h"

/**
 * _islower - checks if a char is lower
 *
 * Return: 1 if true and 0 if false
 *
 * c : any character
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
