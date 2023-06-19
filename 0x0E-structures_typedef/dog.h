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
 * init_dog - Initializes the structure dog
 * @d: pointer to the structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints the members of the structure dog
 * @d: pointer to the structure dog
 * Return: nothing
 */
void print_dog(struct dog *d);

#endif
