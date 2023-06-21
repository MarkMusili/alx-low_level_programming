#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes structure dog.
 * @d: pointer to the structure.
 * @name: of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}