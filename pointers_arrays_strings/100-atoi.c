#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int digit_found = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s == '+')
		{
			/* Do nothing, sign remains the same */
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit_found = 1;
			/* Check for overflow before updating result */
			if (result > (INT_MAX / 10) || (result == (INT_MAX / 10) && (*s - '0')
			> (INT_MAX % 10))
			{
				return (sign == 1 ? INT_MAX : INT_MIN);
			}
			result = result * 10 + (*s - '0');
		}
		/* Stop processing if a non-digit is encountered after digits */
		else if (digit_found)
		{
			break;
		}
		s++;
	}
	return (result * sign);
}
