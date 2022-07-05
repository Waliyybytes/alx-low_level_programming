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
	printf("Name: %s\n", ((d->name == NULL) ? "nil" : d->name));

	printf("Age: %f\n", ((d->age == 0.0) ? printf("nil\n") : d->age));
	printf("Owner: %s\n", ((d->owner == NULL) ? "nil" : d->owner));
}
