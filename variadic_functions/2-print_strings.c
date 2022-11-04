#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - function that prints strings, followed by a new line
 *@separator: string to be printed between the string
 *@n: number of strings passed to the function
 *
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list ap;
	char *esp = "";

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char *);

		if (separator != NULL && string != NULL)
		{
			printf("%s", string);
		}
		if (i < n - 1)
			printf("%s", separator);
		if (separator == NULL)
			printf("%s ", esp);
		if (string == NULL)
			printf("(nil)");

	}
	printf("\n");
	va_end(ap);
}
