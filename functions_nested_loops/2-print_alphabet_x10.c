#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times,
 * followed by a new line each time.
 *
 * Description: This function uses _putchar to print each character
 * of the alphabet.
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	/* Repeat 10 times */
	for (i = 0; i < 10; i++)
	{
		/* Prints the alphabet in lowercase */
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		/* Prints a new line */
		_putchar('\n');
	}
}
