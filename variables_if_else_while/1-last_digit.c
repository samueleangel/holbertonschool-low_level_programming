#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program assigns a random number to the variable n
 * and prints the last digit of the number stored in the variable n
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, lastnm;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastnm = n % 10;


	if (lastnm > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastnm);
	else if (lastnm == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastnm);
	else if (lastnm < 6 && lastnm != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnm);

	return (0);
}
