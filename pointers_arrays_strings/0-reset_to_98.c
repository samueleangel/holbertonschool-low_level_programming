#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * reset_to_98 - Updates the value pointed to by a pointer to 98.
 * @n: A pointer to an int whose value will be updated.
 *
 * Description: This function takes a pointer to an integer and updates
 * the value it points to, to 98.
 */
void reset_to_98(int *n)
{
	*n = 98;
}
