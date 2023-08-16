#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print a name.
 * @name: name of the person
 * @f: pointer to a func.
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
