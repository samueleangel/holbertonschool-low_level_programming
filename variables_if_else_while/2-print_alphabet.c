#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: Prints the alphabet in lowercase, followed by a new line
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	/* Prints the alphabet in lowercase */
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	/* Print a new line */
	putchar('\n');

	return (0);
}
