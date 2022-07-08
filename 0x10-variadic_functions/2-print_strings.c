#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings passed to the function
 * @separator: string to be printed between strings
 * @n: number of strings passed
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	if (separator != NULL && n != 0)
	{
		va_start(ap, n);
		for (i = 1; i <= n; i++)
		{
			str = va_arg(ap, char*);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(ap);
	}
	printf("\n");
}
