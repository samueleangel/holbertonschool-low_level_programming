#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: A pointer to the string to be reversed.
 *
 * Description: This function calculates the length of the string,
 * then swaps characters from the beginning and end, moving towards
 * the center until the entire string is reversed.
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	end = length - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
