#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *_name;
	char *_owner;
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL || name == NULL || _owner == NULL)
		return (NULL);

	_name = name;
	_owner = owner;

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	free(new_dog);
	return (new_dog);
}
