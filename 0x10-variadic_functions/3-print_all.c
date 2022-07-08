#include "variadic_functions.h"
#include <stddef>

/**
 * print_all - prints all arguments passed to it
 * @format: list of types of argument passed
 *
 * Return: nothing
 */
char _integer();
char _float();
char _char();
char _string();

void print_all(const char * const format, ...)
{
	char (*_format[ch]) = {'c', 'i', 'f', 's'};
	va_list ap;
	int i = 0, j = 0;
	char chr;
	while (format[i] != '\0')
	{
		i++;
	}

	va_start(ap, i);
	while (j < i)
	{
		chr = (*_format[format[j]]);
		if (chr != NULL)
		{
			
		}
		j++;
	}
	va_end(ap);
}

char _char()
{
	return ('c');
}
char _integer()
{
	return ('d');
}
char _float()
{
	return ('f');
}
char _string()
{
	return ('s');
}
char

