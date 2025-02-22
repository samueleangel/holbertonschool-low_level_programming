#include "main.h"

/**
 *print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 *
 *Description: This function uses _putchar to print each character of the
 *alphabet
 */
void print_alphabet(void)
{
	char c;

	/* Prints the alphabet in lowercase */
	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	/* Prints new line */
	_putchar('\n');
}
