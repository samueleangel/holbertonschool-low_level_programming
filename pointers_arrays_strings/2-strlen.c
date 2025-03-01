#include "main.h"
#include <unistd.h>

/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to the string.
 *
 * Return: The length of the string (number of characters).
 *
 * Description: This function calculates the length of the string
 * pointed to by 's' by iterating through the characters until the
 * null terminator ('\0') is encountered.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
