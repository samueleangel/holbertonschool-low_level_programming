#include "main.h"

/**
 * _strdup - Duplicates a string.
 * @str: The string  to duplicate.
 *
 * Return: A pointer to the newly allocated duplicated string, or NULL if
 * str is NULL
 * or if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	/* Allocate memory for the duplicate string (+1 for the null terminator) */
	duplicate = (char *)malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
