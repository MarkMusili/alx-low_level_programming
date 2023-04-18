#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees the space allocated for newdog
 * @d: pointer to the new dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
