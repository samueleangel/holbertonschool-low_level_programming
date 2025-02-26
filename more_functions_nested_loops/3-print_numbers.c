#include <unistd.h>
/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line.
 *
 * Description: This function iterates through the numbers 0 to 9 and prints
 * each one using _putchar. After printing all the numbers it prints a newline.
 *
 * Return: void
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
