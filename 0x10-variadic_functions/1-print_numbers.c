#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to print between argu..
 * @n: the num of argu.
 * Return: not return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
for (i = 0; i < n; i++)
{
	printf("%d", va_arg(args, int));
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
