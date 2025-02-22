#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	/* Check if c is in the range of lowercase letters */
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
