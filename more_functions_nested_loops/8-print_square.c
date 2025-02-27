#include "main.h"
#include <unistd.h>

/**
 *  * _putchar - writes the character c to stdout
 *   * @c: The character to print
 *    *
 *     * Return: On success 1.
 *      * On error, -1 is returned, and errno is set appropriately.
 *       */
int _putchar(char c)
{
		return (write(1, &c, 1));
}

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

#include "main.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    print_square(2);
	        print_square(10);
		    print_square(0);
		        return (0);
}

