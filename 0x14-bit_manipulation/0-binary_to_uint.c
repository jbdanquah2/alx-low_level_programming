#include "main.h"
#include <math.h>

/**
 * binary_to_uint - converts binary string to decimal
 * @b: string
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, i, len;
	unsigned int x, j, n;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	for (i = len, j = 0; b[i] != '\0'; j++, i--)
	{
		n = b[j];
		x = pow(2, j);
		dec += x * n;
	}
	return (dec);
}
