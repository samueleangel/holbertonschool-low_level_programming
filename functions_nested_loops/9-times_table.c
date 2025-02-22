#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Description: This function prints the 9 times table in a formatted manner.
 */
void times_table(void)
{
	int row, column, product;

	/* Goes through each line (0 to 9) */
	for (row = 0; row <= 9; row++)
	{
		/* Goes through each column (0 to 9) */
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
				/* Prints commas and spaces */
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

		/* Prints a new line at the end of reach line */
	}
}
