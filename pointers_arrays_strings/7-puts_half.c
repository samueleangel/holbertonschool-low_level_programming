#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: A pointer to the string to be printed.
 *
 * Description: This function calculates the length of the string, determines
 * the starting index for the second half, and prints the characters from
 * that index to the end. If the length is odd, it prints the last 'n'
 * characters, where 'n = (length + 1) / 2'.
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length + 1) / 2;
	}

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}
