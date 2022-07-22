#include "main.h"

/**
 * binary_to_uint - converts binary string to decimal
 * @b: string
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, len;
	unsigned int x = 1, y, j, n;
	int i;
	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	for (i = len - 1, j = 0; i >= 0; i--, j++)
	{
		n = b[j];
		for (y = 0; y <= j; y++)
		{
			x  *= 2;
		}
		dec += (x * n);
	}
	return (dec);
}
