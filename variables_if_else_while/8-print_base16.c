#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	/* Prints numbers from 0 to 9 */
	for (c = '0'; c <= '9'; c++)
		putchar(c);

	/* Prints letters from 'a' to 'f' */
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	/* Prints a new line */
	putchar('\n');

	return (0);
}
