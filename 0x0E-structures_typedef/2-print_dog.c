#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 *@d: pointer the members
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nill)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age <= 0)
		printf("Age: (nill)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nill)\n");
	else
		printf("%s\n", d->owner);
}
