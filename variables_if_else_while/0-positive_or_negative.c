#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Generates a random number and determinates conditions.
 *
 *Returns: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Evaluates if the number is positive, negative or equal to zero */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is equal to zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
