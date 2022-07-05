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
	free(dog_t->name);
	free(dog_t->owner);
	free(d);
}
