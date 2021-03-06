#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search from
 * @size: size of the array
 * @cmp: pointer to a function to compare
 *
 * Return: an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (size <= 0 || !(array) || !(cmp))
		return (-1);

	for (i = 0; i < size; i++)
	{
		res = cmp(array[i]);
		if (res != 0)
			return (i);
	}
	return (-1);
}
