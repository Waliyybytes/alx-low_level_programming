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

	if ( d->age == 0.0)
		printf("Age: nil\n");
	else 
		printf("Age: %f\n",d->age);

	printf("Owner: %s\n", ((d->owner == NULL) ? "nil" : d->owner));
}
