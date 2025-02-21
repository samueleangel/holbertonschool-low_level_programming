#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single-digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i;

	/* Prints the numbers from 0 to 9 */
	for (i = 0; i < 10; i++)
		putchar(numbers[i] + '0');

	/* Prints new line */
	putchar('\n');

	return (0);
}
