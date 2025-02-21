#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints all single digit numbers of base 10
 * starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* Prints numbers from 0 to 9 */
	for (i = 0; i < 10; i++)
		printf("%d", i);

	/*Prints a new line */
	putchar('\n');

	return (0);
}
