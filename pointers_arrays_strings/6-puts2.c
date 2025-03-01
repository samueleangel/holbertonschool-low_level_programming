#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: A pointer to the string to be printed.
 *
 * Description: This function iterates through the string and prints every
 * other character, starting with the first character. It uses '_putchar'
 * to print each character and adds a new line at the end.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}

	_putchar('\n');
}
