#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated concatenated string, or NULL on
 * failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of s1 */
	while (s1[len1] != '\0')
		len1++;

	/* Calculate the length of s2 */
	while (s2[len2] != '\0')
		len2++;

	/* Allocate memory for the ocncatenated string (+1 for the nll ter.*/
	concat = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < len2; j++)
		concat[len1 + j] = s2[j];

	concat[len1 + len2] = '\0';

	return (concat);
}
