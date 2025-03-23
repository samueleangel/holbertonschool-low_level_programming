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
const char *ptr = format;
	char *str;
	char c;
	int i;
	float f;
	int printed = 0; /* Track if something has been printed */

	va_start(args, format);

	while (*ptr)
	{
		/* First if: Check if the format specifier is valid */
		if (*ptr == 'c' || *ptr == 'i' || *ptr == 'f' || *ptr == 's')
		{
			/* Second if: Print separator if something has already been printed */
			if (printed)
				printf(", ");

			printed = 1; /* Mark that something has been printed */

			/* Use a switch statement to handle each format specifier */
			switch (*ptr)
			{
				case 'c':
					c = (char)va_arg(args, int);
					printf("%c", c);
					break;
				case 'i':
					i = va_arg(args, int);
					printf("%d", i);
					break;
				case 'f':
					f = (float)va_arg(args, double);
					printf("%f", f);
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						printf("(nil)");
					else
						printf("%s", str);
					break;
			}
		}

		ptr++;
	}

	va_end(args);
	printf("\n");
