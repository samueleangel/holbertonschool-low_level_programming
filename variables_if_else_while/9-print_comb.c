#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sindg;
	/* Print all numbers from 0 to 9 */
	for (sindg = 0; sindg < 10; sindg++)
	{
		putchar(sindg + '0');
		/* Prints "," after every number, except the last */
		if (sindg < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	/* Print new line */
	putchar('\n');

	return (0);
}
