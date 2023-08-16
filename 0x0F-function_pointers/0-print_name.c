#include "function_pointers.h"

/**
 * print_name - asdasd
 * @name: asdasd
 * @f: asdasd
 * Return: asda
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
