#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @size: size of the array
 * @c: char to initialize the array
 *
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	arr = malloc(sizeof(char) * size);
	if (arr == NULL || size == 0)
		return (NULL);
	for (i = 0; (unsigned int)i < size; i++)
		arr[i] = c;
	return (arr);
}
