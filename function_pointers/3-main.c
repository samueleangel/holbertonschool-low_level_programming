#include "3-calc.h"

/**
 * main- Entry point of the calculator program
 * @argc: Argument count
 * @argv: Argument vector (array of strings)
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operation = get_op_funct(argv[2]);

	if (operation == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
