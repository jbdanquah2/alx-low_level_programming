#include "function_pointers.h"

/**
 * print_name - prints a name passed to it
 * @name: name entered
 * @f: function pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
