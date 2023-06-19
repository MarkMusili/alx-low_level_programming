#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - Prints the members of the structure dog
 * @d: pointer to the structure dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil))\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age == 0.0)
		printf("(nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("(nill)\n");
	else
		printf("Owner: %s\n", d->owner);
}
