/**
 * _isupper - Checks if a character is an uppercase letter.
 * @c: The character to check.
 *
 * Description: This function determines whether the provided character
 * is an uppercase letter in the range 'A' to 'Z'.
 *
 * Return: 1 if the character is an uppercase letter, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
