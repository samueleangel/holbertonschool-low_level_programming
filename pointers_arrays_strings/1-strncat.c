#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most `n` bytes from `src`.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to concatenate from `src`.
 *
 * Return: A pointer to the resulting string `dest`.
 *
 * Description: This function appends the `src` string to the `dest` string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
