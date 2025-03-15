#include "dog.h"

/**
 * free_dog - Frees a dog_t structure.
 * @d: A pointer to the dog_t structure to free.
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);

		free(d);
	}
}
