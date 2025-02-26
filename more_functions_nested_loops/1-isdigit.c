/**
 * _isdigit - Function that checks for a digit (0 through 9)
 *
 * @c: The variable that is checked to see if it is a digit or not
 *
 * Return: 1 if 'c' is a digit, and 0 if 'c' is not.
 */

/* Function that checks if c is a digit or not */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
