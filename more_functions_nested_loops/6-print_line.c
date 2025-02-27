#include "main.h"
#include <unistd.h>

/**
 * print_line - Draws a straight line in the terminal
 * @n: The number of times the character '_' should be printed.
 *
 * Description: This function prints the character '_' 'n' times,
 * followed by a newline character. If 'n' is 0 or less, it only
 * prints the newline character.
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
