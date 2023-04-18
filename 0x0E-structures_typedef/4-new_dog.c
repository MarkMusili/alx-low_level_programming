#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: name new owner
 * Return: pointer to the new dog or NULL funtion failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(strlen(name) + 1);
	newdog->owner = malloc(strlen(owner) + 1);

	if (newdog->name == NULL || newdog->owner == NULL)
		return (NULL);

	strcpy(newdog->name, name);
	strcpy(newdog->owner, owner);

	newdog->age = age;

	return (newdog);
}
