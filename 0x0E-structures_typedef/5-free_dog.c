#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free memory
 * @d: struct whose memory to free
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}
