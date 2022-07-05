#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialized the var of dog
 * @d: pointer
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr;

	ptr = d;
	if (d != NULL)
	{
		ptr->name = name;
		ptr->age = age;
		ptr->owner = owner;
	}
}
