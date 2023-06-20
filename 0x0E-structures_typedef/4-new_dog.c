#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * dog_t *new_dog - new structure to struct dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: pointer to new pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;

	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;

	new_dog->name = malloc(sizeof(char) * (i + 1));
	new_dog->owner = malloc(sizeof(char) * (j + 1));
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		new_dog->name[k] = name[k];
	new_dog->name[k] = '\0';

	for (k = 0; k < j; k++)
		new_dog->owner[k] = owner[k];
	new_dog->owner[k] = '\0';

	new_dog->age = age;

	return (new_dog);
}
