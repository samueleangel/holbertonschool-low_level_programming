#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: A pointer to the string to be printed in reverse.
 *
 * Description: This function first calculates the length of the string,
 * then iterates through the string in reverse order and prints each
 * character using '_putchar'. Finally, it prints a new line character ('\n').
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
