#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program.
 * @argc: Argument count
 * @argv: Argument vector (unused)
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
