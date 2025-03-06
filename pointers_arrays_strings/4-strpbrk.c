#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the main string.
 * @accept: Pointer to the substring containing accepted bytes.
 *
 * Return: Pointer to the first occurrence in s of any byte in accept,
 * or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
			s++;
		}
		return (NULL);
	}
}
