#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - that prints strings, followed by a new line.
 * @separator: the string to print between argu..
 * @n: the num of argu.
 * Return: not return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);
for (i = 0; i < n; i++)
{
	s = va_arg(args, char*);
	if (s == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", s);
	}
	if (i == (n - 1))
	{
		continue;
	}
	if (separator != NULL)
	{
		printf("%s", separator);
	}
}
printf("\n");

	va_end(args);
}
