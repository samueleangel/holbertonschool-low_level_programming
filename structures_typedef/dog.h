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

typedef struct dog dog_t;
