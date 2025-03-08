#include "main.h"
#include <stdio.h>

/**
 * main - Prints the name of the program followed by a new line.
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
