#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	/* Prints the alphabet in reversed order */
	for (c = 'z'; c >= 'a'; c--)
		putchar(c);

	/* Prints a new line */
	putchar('\n');

	return (0);
}
