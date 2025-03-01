#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to which 'src' will be appended.
 * @src: The source string that will be appended to the end of 'dest'.
 *
 * Return: A pointer to the resulting string 'dest'.
 *
 * Description: This function appends the 'src' string to the 'dest' string.
 * overwriting the terminating null byte ('\0') at the end of 'dest', and then
 * adds a terminating null byte at the end of the resulting string.
 */
char *_strcat(char *dest, char *src);
{
	int dest_len = 0; /* Length of the 'dest' string */
	int i = 0; /* Index to traverse 'src' */

	/* Calculate the length of 'dest' */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Append 'src' to the end of 'dest' */
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0'; /* Add the null terminator */

	return (dest);
}
