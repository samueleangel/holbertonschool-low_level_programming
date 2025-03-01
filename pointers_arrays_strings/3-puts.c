#include "main.h"

/**
 * _puts - Print a string to stdout, followed by a new line.
 * @str: A pointer to the string to be printed.
 *
 * Description: This function iterates through the string pointed
 * to by 'str' and prints each character using '_putchar'. After
 * printing the string,
 * it prints a new line character ('\n');
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
