#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: Prints the alphabet in lowercase, and then in uppercase,
 *followed by a new line
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	/* Prints the alphabet in lowercase */
	for (i = 0; lowercase[i] != '\0'; i++)
		putchar(lowercase[i]);

	/* Prints the alphabet in uppercase */
	for (i = 0; uppercase[i] != '\0'; i++)
		putchar(uppercase[i]);

	/* prints a new line */

	putchar('\n');

	return (0);
}
