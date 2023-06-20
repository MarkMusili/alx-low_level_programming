#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_dog - free the memmory allocated for the new_dog
 * @d: pointer to the new_dog
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
