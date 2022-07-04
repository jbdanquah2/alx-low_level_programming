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
	dog_t *new_dog;
	char *_name;
	char *_owner;

	int j, k, name_len = 0, owner_len = 0, i = 0, n = 0;

	while (name[i] != '\0')
	{
		name_len++;
		i++;
	}
	while (owner[n] != '\0')
	{
		owner_len++;
		n++;
	}

	_name = malloc(sizeof(char) * name_len);
	_owner = malloc(sizeof(char) * owner_len);

	for (j = 0; j < name_len; j++)
		_name[j] = name[j];
	for (k = 0; k < owner_len; k++)
		_owner[k] = owner[k];

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
