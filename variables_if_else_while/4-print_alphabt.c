#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: Prints the alphabet in lowercase, excluding
 *the letters 'q' and 'e', followed by a new line.
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	/* Prints the alphabet excluding 'q' and 'e' */
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
	}
	/* prints new line */
	putchar('\n');

	return (0);
}
