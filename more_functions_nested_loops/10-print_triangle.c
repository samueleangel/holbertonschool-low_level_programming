#include <stdio.h>
#include <unistd.h>

/**
 * print_triangle - Prints a right-aligned triangle using the '#' character.
 * @size: The size of the triangle
 *
 * Description: This function prints a right-aligned triangle of size 'size'
 * using the '#' character. If 'size' is 0 or less, it prints only a newline.
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
