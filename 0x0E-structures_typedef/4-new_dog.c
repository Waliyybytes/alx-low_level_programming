#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - new dog details
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *jadid;

	jadid = malloc(sizeof(dog_t *));
	if (jadid == NULL)
		return (NULL);
	jadid->name = name;
	jadid->owner = owner;
	jadid->age = age;

	return (jadid);
}
