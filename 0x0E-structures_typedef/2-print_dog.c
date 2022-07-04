#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the members of the struct
 * @d: poiinter to dog.h
 *
 *Return: nothing
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
