#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
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
	char *d_name, *d_owner;

	d_owner = malloc(sizeof(owner));
	d_name = malloc(sizeof(name));
	jadid = malloc(sizeof(dog_t));
	if (jadid == NULL)
		return (NULL);
	strcpy(d_owner, owner);
	strcpy(d_name, name);

	jadid->name = d_name;
	jadid->owner = d_owner;
	jadid->age = age;

	return (jadid);
}
