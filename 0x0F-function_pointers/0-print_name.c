#include "function_pointers.h"

/**
 * print_name - prints a nameas is.
 * @name: the name to be printed to stdout
 * @f: a function pointer to the format of name
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if  (!name || !f)
		return;
	f(name);
}
