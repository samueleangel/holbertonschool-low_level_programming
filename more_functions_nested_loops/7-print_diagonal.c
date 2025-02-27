#include <stdio.h>

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the character '\' should be printed.
 *
 * Description: This function prints the character '\' 'n' times,
 * with each '\' indented by an increasing number of spaces
 * to create a diagonal effect. if 'n' is 0 or less, it only prints
 * a newline character.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar("\\");
		_putchar("\n");
	}
	_putchar("\n");
}
