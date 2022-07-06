#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function passed to it
 * @array: pointer to an array
 * @size: size of an array
 * @action: pointer to the function that to be used
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!(array) || !(size) || !(action))
		return;

	for (i = 0; i < size; i++)
		action(array[i]);	 
}
