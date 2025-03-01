#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s : A pointer to the string to be converted.
 *
 * Return: The converted integer.
 *
 * Description: This function converts the string 's' to an integer,
 * an inifnite number of '+' and '-' signs, and stopping at the first
 * non-digit character. If no valid number is found, it returns 0.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}

	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > (INT_MAX / 10) || (result == (INT_MAX / 10)
		&& (s[i] - '0') > (INT_MAX % 10)))
		{
			return (0);
		}

		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
