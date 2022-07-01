#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - that allocates memory using malloc
 * @b: int
 *
 * Return: nothing
*/
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
