/**
 * print_most_numbers - Prints the numbers from 0 to 9, excluding 2 and 4.
 *
 * Description: This function iterates through the numbers 0 to 9 and prints
 * each one except 2 and 4 using _putchar. After printing the numbers, it
 * prints a newline.
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
}
