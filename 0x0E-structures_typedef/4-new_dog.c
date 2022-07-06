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
	int i, j, name_len, owner_len;

	new_dog = malloc(sizeof(new_dog));
	if (new_dog == NULL || !(name) || !(owner))
	{
		free(new_dog);
		return (NULL);
	}

	for (name_len = 0; name[name_len]; name_len++)
		;
	for (owner_len = 0; owner[owner_len]; owner_len++)
		;
	new_dog->name = malloc(name_len + 1);
	new_dog->owner = malloc(owner_len + 1);
	if (!(new_dog->name) || !(new_dog->owner))
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
	{
		new_dog->name[i] = name[i];
	}
	new_dog->name[i] = '\0';
	for (j = 0; j < owner_len; j++)
	{
		new_dog->owner[j] = owner[j];
	}
	new_dog->owner[j] = '\0';
	new_dog->age = age;
	return (new_dog);
}
