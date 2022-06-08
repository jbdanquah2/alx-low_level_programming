#include <stdio.h>
#include "main.h"

/**
 * _abs - prints absolute value of a number
 * @i: number to checkx
 *
 * Return: absolute of the number
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	return (i);
}
