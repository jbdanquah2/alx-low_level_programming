#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * 
 * Return: void
 */
void jack_bauer(void)
{
	int i;

	for (i = '00:00'; i <= '23:59'; i++)
	{
		_putchar(i + '0');
	} 
}
