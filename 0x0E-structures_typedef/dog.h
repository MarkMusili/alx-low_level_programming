#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure tag
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * prototypes
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
