#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on the given format.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, check;
	char *str, *sep = "";

	va_start(args, format);

	while (format)
	{
		while (format[i])
		{
			check = format[i] == 'c' || format [i] == 'i' ||
			format[i] == 'f' || format[i] == printf("%s", check ?
			sep : "");
			sep = check ? ", " : sep;
			check && format[i] == 'c' ? printf("%c", 
			va_arg(args, int)) : 0;
			check && format[i] == 'i' ? printf("%d",
			va_arg(args, int)) : 0;
			check && format[i] == 'i' ? printf("%d", 
			va_arg(args, int)) : 0;
			check && format[i] == 's' ? (str = 
			va_arg(args, char *), 
			printf("%s", str ? str : "(nil)")) : 0;
			i++;
		}
		break;
	}

	va_end(args);
	printf("\n");
}
