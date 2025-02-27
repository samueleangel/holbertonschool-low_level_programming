#include "main.h"
#include <unistd.h>

/**
 * print_square - Prints a square using the '#' character.
 * @size: The size of a square.
 *
 * Description: This function prints a quare of size 'size' using the '#'
 * character. If 'size' is 0 or less, it prints only a newline character.
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
