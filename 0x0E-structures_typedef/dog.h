#ifndef DOG_H
#define DOG_H
/**
 *struct dog - main entery
 *@name: first input
 *@age: second input
 *@owner: third input
 *
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/*
 * dog_t - initial
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
