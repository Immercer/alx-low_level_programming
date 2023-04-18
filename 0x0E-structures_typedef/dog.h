#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define new type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typeof for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
