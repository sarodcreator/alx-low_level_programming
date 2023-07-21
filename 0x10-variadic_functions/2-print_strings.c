#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 * @separator:string to print
 * @n: number of integers
 *
 * Return: string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *current_str;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		current_str = va_arg(arg, char *);

		if (current_str == NULL)
			printf("(nil)");
		else
		{
			printf("%s", current_str);
			if (separator != NULL && i < n - 1)
			printf("%s", separator);
		}
	}
	va_end(arg);
	printf("\n");

}
