#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure
 *@name: member1 - name of the dog
 *@age: member2 - age of the dog
 *@owner: member3 - owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
