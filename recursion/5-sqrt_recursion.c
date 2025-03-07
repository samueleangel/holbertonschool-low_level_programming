#include "main.h"

/**
 * find_sqrt - Helper function to find the square root recursively.
 * @n: The number to find the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root, or -1 if none exists.
 */
int _sqrt_recursion(int n)
{
	if (guess * guess > n)
	{
		return (-1);
	}
	if (guess * guess == n)
		return (guess);
	return (find_sqrt(n, guess + 1));
}
