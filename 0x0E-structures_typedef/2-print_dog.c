#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - initialise dog details
 * @d:  dog details from struct
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s", ((d->name == NULL) ? "nil" : d->name));

	printf("Age: %f", ((d->age == NULL) ? "nil" : d->age));

	printf("Owner: %s", ((d->owner == NULL) ? "nil" : d->owner));
}
