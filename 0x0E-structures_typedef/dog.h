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

/* Rename */
typedef struct dog dog_t;

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

/**
 * new_dog - Creates a new dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees the memory allocated for a dog structure
 * @d: Pointer to the dog structure
 *
 * Return: void
 */
void free_dog(dog_t *d);

#endif
