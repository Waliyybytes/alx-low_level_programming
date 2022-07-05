#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * free_dog - new dog details
 * @d: dog name
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		exit;
	free(d->name);
	free(d->owner);
	free(d);
}
