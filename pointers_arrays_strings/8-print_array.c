#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers.
 * @a: A pointer to the array of integers.
 * @n: The number of elements to print.
 *
 * Description: This function prints 'n' elements of the array 'a', separated
 * by a comma and a space. The numbers are displayed in the same order as they
 * are stored in the array. After printing the elements, a new line is added.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
