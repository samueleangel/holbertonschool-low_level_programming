#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - Structure to represent a dog.
 * @name: Dog´s name (string).
 * @age: Dog´s age (float).
 * @owner: Owner´s name (string).
 *
 * Description: This structure stores information about a dog
 * including its name, age, owner´s name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Prototypes */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
