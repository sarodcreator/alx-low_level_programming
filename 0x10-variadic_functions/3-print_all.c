#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - print everything
 * @format: type to print
 * Return: none
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	unsigned int i = 0;
	char format_type;
	char *str;

	va_start(arg, format);
	while (format && format[i])
	{
		format_type = format[i];
		switch (format_type)
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				break;
			case 'i':
				printf("%d", va_arg(arg, int));
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				break;
			case 's':
				str = va_arg(arg, char *);
				if (str == NULL)
					str = "(nil";
				printf("%s", str);
				break;
			default:
				break;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	va_end(arg);
	printf("\n");
}
