#include "main.h"

/**
 * _strcpy - Copies a string from src to dest, including the null byte.
 * @dest: A pointer to the destination buffer.
 * @src: A pointer to the source string.
 *
 * Return: A pointer to the destination buffer ('dest').
 *
 * Description: This function copies the string pointed to by 'src' (including
 * the terminating null byte '\0') to the buffer pointed to by 'dest'. It
 * Returns a pointer to 'dest'.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
