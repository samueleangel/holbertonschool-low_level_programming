#include "dog.h"

/**
 * main- Entry point of the program.
 *
 * Return: 0 on success.
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Buddy";
	my_dog.age = 3.5;
	my_dog.owner = "Alice";

	print_dog(&my_dog);

	my_dog.name = NULL;
	my_dog.owner = NULL;
	print_dog(&my_dog);

	print_dog(NULL);

	return (0);
}
