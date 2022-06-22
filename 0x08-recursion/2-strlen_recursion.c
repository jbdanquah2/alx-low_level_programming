#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - returns the lenght of a string
 * @s: string to check length
 *
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}
