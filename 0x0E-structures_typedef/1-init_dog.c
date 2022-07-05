#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialise dog details
 * @d:  dog details from struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
