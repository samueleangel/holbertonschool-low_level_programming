#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints values based on a format string.
 * @format: A string containing the format specifiers.
 * c: char, i: int, f: float; s: char* (if NULL, print "(nil)").
 * Other characters are ignored.
 *
 * Descritpion: This function takes a format string and a variable number 
 * of arguments. It prints the arguments according to the format.
 * The format string specifies the type of each argument.
 * A newline is printed at the end.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr = format;
	char *str;
	char c;
	int i;
	float f;
	int printed = 0;

	va_start(args, format);

	while (*ptr)
	{
		if (*ptr == 'c' || *ptr == 'i' || *ptr == 'f' || *ptr == 's')
		{
			if (printed)
				printf(", ");

			printed = 1;

			(*ptr == 'c') && (c = (char)va_arg(args, int),
		 	printf("%c", c));
			(*ptr == 'i') && (i = va_arg(args, int),
			printf("%d", i));
			(*ptr == 'f') && (f = (float)va_arg(args, double),
			printf("%f", f));
			(*ptr == 's') && ((str = va_arg(args, char *)) == NULL ?
			printf("(nil)"): printf("%s", str)); 
		}

		ptr++;
	}

	va_end(args);
	printf("\n");
}
