#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Description: This function prints the 9 times table in a  formatted
 * manner.
 * Each number is separated by a comma and two spaces.
 */
void times_table(void)
{
	int row, column, product;

	/* Travels through each line (0 to 9) */
	for (row = 0; row <= 9; row++)
	{
		/*Travels through every column (0 to 9) */
		for (column = 0; column <= 9; column++)
		{
			/* Calculates the product */
			product = row * column;

			/* Prints the product */
			if (column == 0)
			{
				_putchar('0' + product);
			}
			else
			{
				/* Prints the comma and spaces */
				_putchar(',');
				_putchar(' ');

				/* Prints the number with format */
				if (product < 10)
				{
					_putchar(' ');
				}
				_putchar('0' + (product / 10));

				_putchar('0' + (product % 10));
			}
		}
	}

	/* Prints a new line at the end of each line*/
	_putchar('\n');
}
